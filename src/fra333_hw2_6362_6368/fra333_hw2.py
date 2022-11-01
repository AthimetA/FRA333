#!/usr/bin/python3
import numpy as np
import math
from HW2_utils import FKHW2

'''
    Name:   Athimet Aiewcharoen 63340500068
            Siwatchanat Khamhongsa 63340500062
    Date:   2/11/2022
    Description: Homework 2
'''

# Question 1
def endEffectorJacobianHW2(q):
    '''
        q : format list 1x3 [[i_11, i_12, i_13]]
        q unit: rad
    '''
    # R = Rotation matrix of each joint[i] via GlobalFrame [3x3x4]
    # P = Position of Frame[i] via GlobalFrame [3x4]
    # R_e = Rotation matrix of end effector via GlobalFrame [3x3]
    # P_e = Position of end effector via GlobalFrame [3x1]
    R,P,R_e,p_e = FKHW2(q)
    
    '''
    R = 
        [
        [[111. 211. 311. 411.]
        [112. 212. 312. 412.]
        [113. 213. 313. 413.]]

        [[121. 221. 321. 421.]
        [122. 222. 322. 422.]
        [123. 223. 323. 423.]]

        [[131. 231. 331. 431.]
        [132. 232. 332. 432.]
        [133. 233. 333. 433.]]
        ]
    
    R0_1 = 
        [[111. 112. 113.]
        [121. 122. 123.]
        [131. 132. 133.]]
    '''    
    # Pick the rotation matrix of each joint (Frame[i]) via GlobalFrame
    R0_1 = R[:,:,0] # Frame[1] via GlobalFrame
    R0_2 = R[:,:,1] # Frame[2] via GlobalFrame
    R0_3 = R[:,:,2] # Frame[3] via GlobalFrame

    # Since all the joints are revolute, the Jacobian p = 1
    rho = [1,1,1]
    
    # Find the Jacobian matrix of angular velocity for End Effector
    Z = np.array([[0],[0],[1]]) # Z axis of Local Frame [3x1]
    # Calculate the angular velocity Jacobian of each joint
    JW0_1 = rho[0] * (R0_1 @ Z) 
    JW0_2 = rho[1] * (R0_2 @ Z)
    JW0_3 = rho[2] * (R0_3 @ Z)
    # Stack the angular velocity Jacobian of each joint to form the Jacobian matrix of angular velocity for End Effector [3x3]
    JW = np.concatenate((JW0_1,JW0_2,JW0_3),axis=1)
    
    # Find the Jacobian matrix of linear velocity for End Effector
    P0_01 = P[:,0] # Position of Frame[1] via GlobalFrame [3x1]
    P0_02 = P[:,1] # Position of Frame[2] via GlobalFrame [3x1]
    P0_03 = P[:,2] # Position of Frame[3] via GlobalFrame [3x1]
    P0_E = p_e # Position of End Effector via GlobalFrame [3x1]
    # Calculate the linear velocity Jacobian of each joint
    JV0_1 = ((1-rho[0]) * (R0_1 @ Z)) + np.cross(JW0_1.reshape(1,3),(P0_E-P0_01)).reshape(3,1)
    JV0_2 = ((1-rho[1]) * (R0_1 @ Z)) + np.cross(JW0_2.reshape(1,3),(P0_E-P0_02)).reshape(3,1)
    JV0_3 = ((1-rho[2]) * (R0_1 @ Z)) + np.cross(JW0_3.reshape(1,3),(P0_E-P0_03)).reshape(3,1)
    # Stack the linear velocity Jacobian of each joint to form the Jacobian matrix of linear velocity for End Effector [3x3]
    JV = np.concatenate((JV0_1,JV0_2,JV0_3),axis=1)
        
    '''
        return format list 6x3
        [ [i_11, i_12, i_13],
          [i_21, i_22, i_23],
          [i_31, i_32, i_33],
          [i_41, i_42, i_43],
          [i_51, i_52, i_53],
          [i_61, i_62, i_63] ]
    '''
    # Stack the Jacobian matrix of angular velocity and linear velocity to form the Jacobian matrix of End Effector [6x3]
    J_e = np.concatenate((JW,JV),axis=0)
    
    return J_e
    

# Question 2
def checkSingularityHW2(q):
    '''
        q : format list 1x3 [[i_11, i_12, i_13]]
        q unit: rad
    '''
    # J_e = Jacobian matrix of End Effector [6x3]
    # J_e_star = Reduced Jacobian matrix of End Effector [3x3]
    J_e = endEffectorJacobianHW2(q)
    # We only need the last 3 rows of the Jacobian matrix of End Effector it represents the Task Space linear velocity in the Global Frame [X,Y,Z]
    J_e_star = J_e[3:6,:]
    # Find the determinant of Reduced Jacobian matrix of End Effector to check singularity
    # If value of the determinant is undefined(subtrack by zero) the return value is 0.0 So, it always below the threshold
    J_e_star_det = np.linalg.det(J_e_star)
    
    '''
        return format bool
    '''
    # Set threshold of Singularity = 0.001 
    threshold = 0.001
    # If the absolute value of determinant of Reduced Jacobian matrix is 0 or below threshold, then the robot is in singularity
    if np.abs(J_e_star_det) < threshold:
        return True
    else:
        return False

# Question 3
def computeEffortHW2(q,w):
    '''
        q : format list 1x3 [[i_11, i_12, i_13]]
        q unit: rad
    '''
    # Get the Rotation matrix of each Frame[i] via GlobalFrame and Position of Frame[i] via GlobalFrame and End Effector via GlobalFrame
    R,P,R_e,p_e = FKHW2(q)
    # Get the Jacobian matrix of End Effector
    J_e = endEffectorJacobianHW2(q)
    
    # Get the Moement and Force of End Effector
    w_t = np.transpose(w) # Since w is a 1x6 vector, we need to transpose it to 6x1
    N = w_t[0:3] # Moment of End Effector [3x1]
    F = w_t[3:6] # Force of End Effector [3x1]
    
    # Find the effort of each joint
    # Since Sensor is attached to End Effector, the given Moment and Force of End Effector need to be transformed to GlobalFrame
    # Get Rotation matrix that transforms the values of w from End Effector Frame to Global Frame
    R0_e = R_e # R0_4 = R_e
    W0_e = np.concatenate((R0_e @ N,R0_e @ F),axis=0) # Stack Moment and Force of End Effector to form the vector of w in GlobalFrame [6x1]
    # Calculate the effort of each joint
    J_e_transpose = np.transpose(J_e) # Since J_e is a 6x3 matrix, we need to transpose it to 3x6 so that we can multiply it with W0_e [6x1]
    effort = J_e_transpose @ W0_e # [3x6] @ [6x1] = [3x1]
    '''
        return format list 1x3
        [ [i_11, i_12, i_13] ]
    '''
    return np.transpose(effort) # Since effort is a 3x1 vector, we need to transpose it to 1x3
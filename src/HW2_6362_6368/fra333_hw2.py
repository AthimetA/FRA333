#!/usr/bin/python3
from concurrent.futures import thread
import numpy as np
import math
from HW2_utils import FKHW2

'''
    Name:   Athimet Aiewcharoen 63340500068
            Siwatchanat Khamhongsa 63340500062
    Date:   30/10/2022
    Description: Homework 2
'''

# Question 1
def endEffectorJacobianHW2(q):
    '''
        q : format list 1x3 [[i_11, i_12, i_13]]
        q unit: rad
        type something here
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
    # Since all the joints are revolute, the Jacobian p = 1
    rho = [1,1,1]
    
    R0_1 = R[:,:,0]
    R0_2 = R[:,:,1]
    R0_3 = R[:,:,2]
    R0_4 = R[:,:,3] # R0_4 = R_e
    
    # Find the Jacobian matrix of angular velocity for End Effector
    Z = np.array([[0],[0],[1]]) # Z axis of Local Frame [3x1]
    JW0_1 = rho[0] * (R0_1 @ Z)
    JW0_2 = rho[0] * (R0_2 @ Z)
    JW0_3 = rho[0] * (R0_3 @ Z)
    JW = np.concatenate((JW0_1,JW0_2,JW0_3),axis=1)
    
    # Find the Jacobian matrix of linear velocity for End Effector
    P0_01 = P[:,0]
    P0_02 = P[:,1]
    P0_03 = P[:,2]
    P0_04 = P[:,3] # P0_04 = p_e
    P0_E = p_e
    JV0_1 = ((1-rho[0]) * (R0_1 @ Z)) + np.cross(JW0_1.reshape(1,3),(P0_E-P0_01)).reshape(3,1)
    JV0_2 = ((1-rho[1]) * (R0_1 @ Z)) + np.cross(JW0_2.reshape(1,3),(P0_E-P0_02)).reshape(3,1)
    JV0_3 = ((1-rho[2]) * (R0_1 @ Z)) + np.cross(JW0_3.reshape(1,3),(P0_E-P0_03)).reshape(3,1)
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
    J_e = np.concatenate((JW,JV),axis=0)
    
    return J_e
    

# Question 2
def checkSingularityHW2(q):
    '''
        q : format list 1x3 [[i_11, i_12, i_13]]
        q unit: rad
        type something here
    '''
    J_e = endEffectorJacobianHW2(q)
    J_e_star = J_e[3:6,:]
    J_e_star_det = np.linalg.det(J_e_star)
    
    '''
        return format bool
    '''
    threshold = 0.001
    if np.abs(J_e_star_det) < threshold:
        return True
    else:
        return False

# Question 3
def computeEffortHW2(q,w):
    '''
        q : format list 1x3 [[i_11, i_12, i_13]]
        q unit: rad
        type something here
    '''
    R,P,R_e,p_e = FKHW2(q)
    J_e = endEffectorJacobianHW2(q)
    
    R0_e = R_e # R0_4 = R_e
    
    w_t = np.transpose(w)
    N = w_t[0:3]
    F = w_t[3:6]
    
    W0_e = np.concatenate((R0_e @ N,R0_e @ F),axis=0)
    J_e_transpose = np.transpose(J_e)
    
    effort = J_e_transpose @ W0_e
    
    '''
        return format list 1x3
        [ [i_11, i_12, i_13] ]
    '''

    return np.transpose(effort)
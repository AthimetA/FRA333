#!/usr/bin/python3

import sys
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from sensor_msgs.msg import JointState
import numpy as np

np.set_printoptions(precision=4, suppress=True)

class CocoaVKinematic(Node):
    def __init__(self):
        super().__init__('cocoav_kinematic')
        # define publisher rate
        self.rate = 10
        qos_profile = QoSProfile(depth=10)
        # Cocoa link length in meter
        self.link_length = [0.1360,0.26179,0.200]
        self.home_config = [0.0,0.0,0.0] # [q1,q2,q3]
        self.test_config = [3.14,0,3.14] # [q1,q2,q3]

        # Create a timer to update the robot state
        self.timer = self.create_timer(1/self.rate, self.timer_callback)
    
        R, P = self.cocoax_forward_kinematic(self.test_config)
        J_e = self.cocoax_jacobian_matrix(self.test_config)
        test = self.cocoax_jacobian_check_singularity(J_e)
        # print('R0_1 = \n', R[:,:,0])
        # print('*'*50)
        # print('R0_2 = \n', R[:,:,1])
        # print('*'*50)
        # print('R0_3 = \n', R[:,:,2])
        # print('*'*50)
        # print('R0_e = \n', R[:,:,3])
        # print('*'*50)
        # print('P0_1 = \n', P[:,0])
        # print('*'*50)
        # print('P0_2 = \n', P[:,1])
        # print('*'*50)
        # print('P0_3 = \n', P[:,2])
        # print('*'*50)
        # print('P0_e = \n', P[:,3])
        
        
    def timer_callback(self):
        pass
    
    def cocoax_jacobian_matrix(self, q=[0.0,0.0,0.0]):
        '''
            q : format list 1x3 [[i_11, i_12, i_13]]
            q unit: rad
        '''
        # R = Rotation matrix of each joint[i] via GlobalFrame [3x3x4]
        # P = Position of Frame[i] via GlobalFrame [3x4]
        # R_e = Rotation matrix of end effector via GlobalFrame [3x3]
        # P_e = Position of end effector via GlobalFrame [3x1]
        R, P = self.cocoax_forward_kinematic(q)        
        
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
        # Pick the rotation matrix and postion of each joint (Frame[i]) via GlobalFrame
        R0_1 = R[:,:,0] # Frame[1] via GlobalFrame
        R0_2 = R[:,:,1] # Frame[2] via GlobalFrame
        R0_3 = R[:,:,2] # Frame[3] via GlobalFrame
        R0_e = R[:,:,3] # End Effector via GlobalFrame
        
        P0_01 = P[:,0] # Position of Frame[1] via GlobalFrame [3x1]
        P0_02 = P[:,1] # Position of Frame[2] via GlobalFrame [3x1]
        P0_03 = P[:,2] # Position of Frame[3] via GlobalFrame [3x1]
        P0_E = P[:,3] # Position of End Effector via GlobalFrame [3x1]

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
        # Calculate the linear velocity Jacobian of each joint
        JV0_1 = ((1-rho[0]) * (R0_1 @ Z)) + np.cross(JW0_1,(P0_E-P0_01),axis=0)
        JV0_2 = ((1-rho[1]) * (R0_1 @ Z)) + np.cross(JW0_2,(P0_E-P0_02),axis=0)
        JV0_3 = ((1-rho[2]) * (R0_1 @ Z)) + np.cross(JW0_3,(P0_E-P0_03),axis=0)
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
    
    def cocoax_jacobian_check_singularity(self,J_e):
        # We only need the last 3 rows of the Jacobian matrix of End Effector it represents the Task Space linear velocity in the Global Frame [X,Y,Z]
        J_e_star = J_e[3:6,:] # [3x3]
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
    
    def cocoax_forward_kinematic(self, q=[0.0,0.0,0.0]):
        # Cococax robot parameters
        l1, l2, l3 = self.link_length
        DH = np.matrix([[0, 0, l1, 0, 0],
                        [0, np.pi/2, 0, np.pi/2, 0],
                        [l2, 0, 0, 0, 0],])
        
        H  = np.matrix([[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]])
        Hlist = []
        for i in range(DH.shape[0]):
            if DH[i, 4] == 0:# Revolute joint
                Hj = self.rotateZ(q[i])
            elif DH[i, 4] == 1: # Prismatic joint
                Hj = self.translateZ(q[i])
            else: # Fixed joint
                Hj = np.matrix([[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]])
            H = H * self.translateX(DH[i, 0]) * self.rotateX(DH[i, 1]) * self.translateZ(DH[i, 2]) * self.rotateZ(DH[i, 3]) * Hj
            Hlist.append(H)
        
        H3e = np.matrix([[0, 0, 1, 0],
                        [-1, 0, 0, -l3],
                        [0, -1, 0, 0],
                        [0, 0, 0, 1]])
        
        He = H * H3e
        
        # Get position of end-effector
        R0_e = He[0:3,0:3]
        P0_e = He[0:3,3]
        
        # Get Rotation matrix of each joint
        R0_1 = Hlist[0][0:3,0:3]
        R0_2 = Hlist[1][0:3,0:3]
        R0_3 = Hlist[2][0:3,0:3]
        R = np.empty((3,3,4),dtype=np.float64)
        R[:,:,0] = R0_1
        R[:,:,1] = R0_2
        R[:,:,2] = R0_3
        R[:,:,3] = R0_e
        
        # Get position of each joint
        P0_1 = Hlist[0][0:3,3]
        P0_2 = Hlist[1][0:3,3]
        P0_3 = Hlist[2][0:3,3]
        P = np.concatenate((P0_1,P0_2,P0_3,P0_e),axis=1)
        
        return R, P
        
    def translateX(self,x):
        return np.matrix([[1, 0, 0, x], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]])

    def translateZ(self,z):
        return np.matrix([[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, z], [0, 0, 0, 1]])

    def rotateX(self,theta):
        return np.matrix([[1, 0, 0, 0], [0, np.cos(theta), -np.sin(theta), 0], [0, np.sin(theta), np.cos(theta), 0], [0, 0, 0, 1]])

    def rotateZ(self,theta):
        return np.matrix([[np.cos(theta), -np.sin(theta), 0, 0], [np.sin(theta), np.cos(theta), 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]])

    def rotateY(self,theta):
        return np.matrix([[np.cos(theta), 0, np.sin(theta), 0], [0, 1, 0, 0], [-np.sin(theta), 0, np.cos(theta), 0], [0, 0, 0, 1]])
        
def main(args=None):
    rclpy.init(args=args)
    node = CocoaVKinematic()
    try:
        while rclpy.ok():
            rclpy.spin_once(node)
    except KeyboardInterrupt:
        print('repeater stopped cleanly')
    except BaseException:
        print('exception in repeater:', file=sys.stderr)
        raise
    finally:
        node.destroy_node()
        rclpy.shutdown() 

if __name__=='__main__':
    main()

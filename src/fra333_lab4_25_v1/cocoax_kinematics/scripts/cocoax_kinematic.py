#!/usr/bin/python3

import sys
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from sensor_msgs.msg import JointState
import numpy as np

from cocoax_interfaces.msg import CocoaControlRef

np.set_printoptions(precision=4, suppress=True)

class CocoaVKinematic(Node):
    def __init__(self):
        super().__init__('cocoav_kinematic')
        
        # Parameters
        if len(sys.argv)>=2: 
            # 1st argument is the type of kinematic
            # "forward" or "inverse
            print(str(sys.argv))
            self.knimatic_type = sys.argv[1]
        else:
            # default type of kinematic
            self.knimatic_type = 'inverse'
        self.get_logger().info( 'Type: '+str(self.knimatic_type))
        
        # define publisher rate
        self.rate = 1000
        qos_profile = QoSProfile(depth=10)
        # Cocoa link length in meter
        self.link_length = [0.1360,0.26179,0.200]
        self.home_config = [0.0,0.0,0.0] # [q1,q2,q3]

        # Create a timer to update the robot state
        self.timer = self.create_timer(1/self.rate, self.timer_callback)
        
        # Kinematic Buffer
        self.joint_state_sub_buffer = JointState()
        self.joint_state_pub_buffer = CocoaControlRef()
        
        if self.knimatic_type == 'forward':
            # Create a subscriber to get joint state
            self.states_subscriber = self.create_subscription(JointState,'/joint_states',self.joint_state_callback,qos_profile)
            # Create a publisher to publish end-effector pose
            self.states_publisher = self.create_publisher(CocoaControlRef, "/cocoax/end_effector_joint_states", qos_profile)
        elif self.knimatic_type == 'inverse':
            # Create a subscriber to get end-effector pose
            self.states_subscriber = self.create_subscription(JointState,'/cocoax/end_effector_joint_states',self.joint_state_callback,qos_profile)
            # Create a publisher to publish joint state
            self.states_publisher = self.create_publisher(CocoaControlRef, "/cocoax/cocoax_control_ref", qos_profile)
        
        '''
        # Test procedure
        #############################################################################
        self.test_config = [1.0,0.1,1.0] # [q1,q2,q3]
        R, P, R0_e, P0_e = self.cocoax_forward_position_kinematic(self.test_config) 
        self.test_pos = P0_e
        self.test_vel = [0.1,0.2,0.1]
        
        # Test IVK
        q, qdot = self.cocoax_inverse_velocity_kinematic(X=self.test_pos,X_dot=self.test_vel)
        print('q: \n', q)
        print('qdot: \n', qdot)
        
        # Test FVK
        X_dot = self.cocoax_forward_velocity_kinematic(q=q,q_dot=qdot)
        print('X_dot: \n', X_dot)
        #############################################################################
        '''
        
    def joint_state_callback(self, msg: JointState):
        self.joint_state_sub_buffer = msg
    
    def timer_callback(self):
        if self.knimatic_type == 'forward':
            q = self.joint_state_sub_buffer.position.tolist()
            q_dot = self.joint_state_sub_buffer.velocity.tolist()
            if q!=[] and q_dot!=[]:
                R, P, R0_e, P0_e = self.cocoax_forward_position_kinematic(q)
                X_dot = self.cocoax_forward_velocity_kinematic(q=q,q_dot=q_dot)
                # Publish end-effector pose
                self.joint_state_pub_buffer = CocoaControlRef()
                self.joint_state_pub_buffer.reference_position = P0_e.tolist()
                self.joint_state_pub_buffer.reference_velocity = X_dot
                self.states_publisher.publish(self.joint_state_pub_buffer)
        elif self.knimatic_type == 'inverse':
            X = self.joint_state_sub_buffer.position.tolist()
            X_dot = self.joint_state_sub_buffer.velocity.tolist()
            if X!=[] and X_dot!=[]:
                q, q_dot = self.cocoax_inverse_velocity_kinematic(X=X,X_dot=X_dot)
                # Publish joint state
                if q!=[] and q_dot!=[]:
                    self.joint_state_pub_buffer = CocoaControlRef()
                    self.joint_state_pub_buffer.reference_position = q
                    self.joint_state_pub_buffer.reference_velocity = q_dot
                    self.states_publisher.publish(self.joint_state_pub_buffer)
                else:
                    self.states_publisher.publish(self.joint_state_pub_buffer)
                    # self.get_logger().info('Inverse Velocity Kinematic is not possible')
        
    def cocoax_inverse_velocity_kinematic(self, X=[0.0,0.0,0.0], X_dot=[0.0,0.0,0.0]):
        # Get Joint position configuration
        q, status = self.cocoax_inverse_position_kinematic(X)
        # If Inverse Kinematic is not possible
        if status == False:
            return [], []
        '''
            X_dot =[[Vx],       q_dot = [[q1_dot],
                    [Vy],                [q2_dot],
                    [Vz]]                [q3_dot]]
                    
        Inverse Velocity Kinematic can be calculated by using Jacobian Inverse
                    q_dot = J_v_inv * X_dot
        '''
        # Get Jacobian Matrix
        J_e = self.cocoax_jacobian_matrix(q)
        J_v = J_e[3:6,:]
        # Check the Jacobian singularity
        threshold = 0.001
        if np.abs(np.linalg.det(J_v)) < threshold:
            # self.get_logger().info('Jacobian is singular')
            return [], []
        # Get Matrix
        qMatrix = np.matrix([q]).T
        X_dotMatrix = np.matrix([X_dot]).T
        J_vMatrix = np.matrix(J_v)
        # Calculate Inverse Jacobian
        J_v_inv = np.linalg.inv(J_vMatrix)
        # Calculate Joint Velocity
        q_dot = np.matmul(J_v_inv,X_dotMatrix)
        q_dot = np.array(q_dot.T)[0].tolist()
        # Return joint velocity as [q1_dot,q2_dot,q3_dot]
        return q , q_dot
    
    def cocoax_forward_velocity_kinematic(self, q=[0.0,0.0,0.0], q_dot=[0.0,0.0,0.0]):
        '''
           X = [[row],             [[x],
                [pitch],            [y],
                [yaw],     to       [z]]
                [x],
                [y],
                [z]]

            J_e = [ [Jw_x],        [[Jv_x],
                    [Jw_y],  to     [Jv_y],
                    [Jw_z],         [Jv_z]]
                    [Jv_x],
                    [Jv_y],
                    [Jv_z] ] 
            
        CocoaX robot is a 3-DOF robot, we decide to task space variable 
            - position [x,y,z]
            - velocity [vx,vy,vz]
        '''
        J_e = self.cocoax_jacobian_matrix(q)
        J_v = J_e[3:6,:]
        # Get Matrix
        qMatrix = np.matrix([q]).T
        q_dotMatrix = np.matrix([q_dot]).T
        J_vMatrix = np.matrix(J_v)
        # Calculate Twist
        # TW = J_eMatrix*q_dotMatrix , V = J_vMatrix*q_dotMatrix
        V = np.matmul(J_vMatrix,q_dotMatrix)
        X_dot = np.array(V.T)[0].tolist()
        # Return linear velocity as [vx,vy,vz]
        return X_dot
    
    def cocoax_jacobian_matrix(self, q=[0.0,0.0,0.0]):
        '''
            q : format list 1x3 [[i_11, i_12, i_13]]
            q unit: rad
        '''
        # R = Rotation matrix of each joint[i] via GlobalFrame [3x3x4]
        # P = Position of Frame[i] via GlobalFrame [3x4]
        # R_e = Rotation matrix of end effector via GlobalFrame [3x3]
        # P_e = Position of end effector via GlobalFrame [3x1]
        R, P, R0_e, P0_e = self.cocoax_forward_position_kinematic(q)        
        
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
        R0_E = R[:,:,3] # End Effector via GlobalFrame
        
        P0_01 = P[:,0] # Position of Frame[1] via GlobalFrame [3x1]
        P0_02 = P[:,1] # Position of Frame[2] via GlobalFrame [3x1]
        P0_03 = P[:,2] # Position of Frame[3] via GlobalFrame [3x1]
        P0_E  = P[:,3] # Position of End Effector via GlobalFrame [3x1]

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
    
    def cocoax_forward_position_kinematic(self, q=[0.0,0.0,0.0]):
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
        
        # Change end effector position to array
        P0_e = np.array(P0_e.T)[0]
        return R, P, R0_e, P0_e
        
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
    
    def check_IK_position_solution_exist(self, x, y, z, r1, r2):
        [l1,l2,l3] = self.link_length
        A0 = (x**2)+(y**2)+(z**2)+(l1**2)
        A1 = 2*z*l1
        A = A0-A1
        if (l2-l3) <= np.sqrt(A) <= (l2+l3) and A >= 0:  
            return True
        # self.get_logger().info('IK solution does not exist')
        return False
    
    def check_IK_position_joint_limit(self, q1, q2, q3):
        if (-np.pi<= q1 <= np.pi) and (-np.pi/6 <= q2 <= np.pi/6) and (-np.pi/3 <= q3 <= np.pi/2):
            return True
        # self.get_logger().info('IK joint limit exceed')
        return False
    
    def cocoax_inverse_position_kinematic(self, X=[0.0,0.0,0.0],r = [1.0,1.0], Lastconfig=[0.0,0.0,0.0]):
        [l1,l2,l3] = self.link_length
        [x,y,z] = X
        [r1,r2] = r # r1 = 1 or -1, r2 = 1 or -1
        if(self.check_IK_position_solution_exist(x, y, z, r1, r2)):
            # input: [x,y,z] in meter
            # solve for q1
            q1 = np.arctan2(y/r1,x/r1)
            # solve for q3
            sin_q3 = (((z-l1)**2) + (x*x)+(y*y) - (l2*l2) - (l3*l3))/(2*l2*l3)
            cos_q3 = r2*np.sqrt(1-(sin_q3**2))
            q3 = np.arctan2(sin_q3,cos_q3)
            # solve for q2
            sin_q2 = ((l3*(z-l1)*np.cos(q3)) - (r1*np.sqrt(x**2+y**2)*(l2+l3*np.sin(q3))))
            cos_q2 = ((-l1*l2)-(l1*l3*np.sin(q3))+(l2*z)+(l3*r1*np.sqrt(x**2+y**2)*np.cos(q3))+(l3*z*np.sin(q3)))
            q2 = np.arctan2(sin_q2,cos_q2)
            if(self.check_IK_position_joint_limit(q1, q2, q3)):
                config = [q1,q2,q3]
                status = True
                return config, status
        status = False
        config = Lastconfig
        return config, status
        
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

#!/usr/bin/python3
import rclpy
from rclpy.node import Node
from my_first_package.srv import AthSum
from my_first_package.msg import Num

class AthimetPub(Node):
    def __init__(self):
        super().__init__("AthimetA")
        self.cons1 = 0
        self.cons2 = 1
        self.numPub = self.create_publisher(Num,'/athSendNum',10)
        self.timerSendNum = self.create_timer(3.0,self.sendNumMsg)
        self.AAPUBServer = self.create_service(AthSum,'/athSrvname_0',self.srvServercallback)
        self.declare_parameters(namespace='',parameters=[('gain',5.0),("dummyParam","Hello")])
        print("Apub is online")
        
    def srvServercallback(self,request,response):
        response.sum = request.a +request.b
        # self.get_logger().info('Incoming request\na: %d b: %d sum:%d' % (request.a, request.b,response.sum))
        return response
    
    def sendNumMsg(self):
        msg = Num()
        msg.num1 = self.cons1
        msg.num2 = self.cons2
        self.numPub.publish(msg)
        # self.get_logger().info('sending num1:%d num2:%d **** gain = %.2f , dummy = %s' %
        #                        (self.cons1,self.cons2,
        #                         self.get_parameter('gain').get_parameter_value().double_value,
        #                         self.get_parameter('dummyParam').get_parameter_value().string_value))
        
        my_new_dummy = rclpy.parameter.Parameter(
            'dummyParam',
            rclpy.Parameter.Type.STRING,
            'world'
        )
        my_new_gain = rclpy.parameter.Parameter(
            'gain',
            rclpy.Parameter.Type.DOUBLE,
            self.cons1*0.5
        )
        all_new_parameters = [my_new_dummy,my_new_gain]
        self.set_parameters(all_new_parameters)
        
        self.cons1 +=1
        self.cons2 +=1

def main(args=None):
    rclpy.init(args=args)
    A1A = AthimetPub()
    rclpy.spin(A1A)
    A1A.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
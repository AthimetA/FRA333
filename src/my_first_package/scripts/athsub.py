#!/usr/bin/python3
import rclpy
from rclpy.client import Future
from rclpy.node import Node
from my_first_package.srv import AthSum
from my_first_package.msg import Num

class AthimetSub(Node):
    def __init__(self):
        super().__init__("AthimetB")
        self.cons1 = 1
        self.cons2 = 2
        self.result = 0
        self.future = Future()
        self.numSub = self.create_subscription(Num,'/athSendNum',self.sendNumMsgCallback,10)
        
        self.AASUBclent = self.create_client(AthSum,'/athSrvname_0')
        
        while not self.AASUBclent.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('athSrvname_0(fromsub) service not available, waiting again')
        
        self.req_athSrvname_0 = AthSum.Request()           
        self.timer = self.create_timer(2.0,self.send_athSrvname_0_request)
        # self.timer2 = self.create_timer(1.0,self.checkServiceIsDone)
        self.declare_parameters(namespace='',parameters=[('s1',1.0),('s2',2.0)])
        print("Asub is online")
    
    def sendNumMsgCallback(self,msg):
        # self.get_logger().info('Reciving num1:%d num2:%d'%(msg.num1,msg.num2))
        pass
            
    def srvClientcallback(self):
        self.cons1 += 1
        self.cons2 += 1
    
    def send_athSrvname_0_request(self):
        self.req_athSrvname_0.a = self.cons1
        self.req_athSrvname_0.b = self.cons2
        self.future = self.AASUBclent.call_async(self.req_athSrvname_0)
        self.future.add_done_callback(self.serviceIsDoneCallback)
        self.get_logger().info('athSrvname_0(fromsub) reqSend')
        return self.future.result()
    
    def serviceIsDoneCallback(self,future):
        if future.done():
            # self.get_logger().info(str(future)+" and "+str(self.future)) # they are the same future (check already)
            self.get_logger().info('Sum : %d \n -----------------' %(future.result().sum))
            self.srvClientcallback()

def main(args=None):
    rclpy.init(args=args)
    A2A = AthimetSub()
    rclpy.spin(A2A)
    A2A.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
#!/usr/bin/python3
from trackbeebot import BeeBot
import matplotlib.pyplot as plt 
from matplotlib.patches import Polygon
import numpy as np
import math
import json

class MyBeeBot(BeeBot):
    def __init__(self,a_i):
        super().__init__(a_i)
        # a_i is initial position
        # c is command {'0'->stop, '1'->forward, '2'->backward, '3'->turn right, '4'->turn left}
        # o is obstacle
        self.posHex = 
        print('posCer\n',self.posCar)
        self.posHex = self.car2hex(self.posCar)
        print('posHex\n',self.posHex)
        # self.posCar = np.vstack((self.idx2pos(self.posHex[0],self.posHex[1]).reshape(2,1),[1]))
        # Our bee bot is a hexagonal grid
        # self.linearTrans = np.array([[1/3,np.sqrt(3)/3,0],[-1/3, np.sqrt(3)/3,0],[0,0,1]])
        # self.ltransCheck = np.matmul(self.linearTrans,self.posCar)
        # self.det = np.linalg.det(self.linearTrans)
        # self.rotTrans = np.array([[np.cos(np.pi/3), -np.sin(np.pi/3)],[np.sin(np.pi/3), np.cos(np.pi/3)]])
        # Defult transformation matrix is hexagonal pos (+1,+1)
        self.tranformationMatrix = np.array([[0,-1, 0],
                                            [1, 0, np.sqrt(3)],
                                            [0, 0, 1]])
        # self.tranformationMatrix = self.Tranformation2D([90],[0,np.sqrt(3)])
        print('tranformationMatrix\n',self.tranformationMatrix)
        # self.check = np.matmul(self.hTranformation2D([-60],[0,0]),self.posHex)
    
    def trackBeeBot(self, com, W):
    # a_i is initial position
    # com is command {'0'->stop, '1'->forward, '2'->backward, '3'->turn right, '4'->turn left}
    # W is wall
        # for c in com :
        #     if c == '0':
        #         break
        #     elif c == '1':
        #         self.posCar = np.matmul(self.hTranformation2D([0],[0,1]),self.posCar)
        #     elif c == '2':
        #         self.posCar = np.matmul(self.hTranformation2D([0],[0,-1]),self.posCar)
        #     elif c == '3':
        #         self.posCar = np.matmul(self.hTranformation2D([90],[0,0]),self.posCar)
        #     elif c == '4':
        #         self.posCar = np.matmul(self.hTranformation2D([-90],[0,0]),self.posCar)
        #     else:
        #         print('Command Error')
        #         break
        #     if self.checkCollision(W):
        #         print('Collision')
        #         break
        return self.posCar
    
    def checkCollision(self, W):
        if self.posCar[0] > W[0] or self.posCar[0] < 0 or self.posCar[1] > W[1] or self.posCar[1] < 0:
            return True
        else:
            return False
    
    def car2hex(self, posCartesian):
        linearTrans = np.array([[1/3,np.sqrt(3)/3,0]
                                ,[-1/3, np.sqrt(3)/3,0]
                                ,[0,0,1]])
        poshexagonal = np.matmul(linearTrans,posCartesian)
        return poshexagonal
    
    def hex2car(self, posHexagonal):
        # posHexagonal is a 3x3 vector = [R , p],[0,0,0,1]
                                        
        linearTrans = np.array([[3/2,-3/2,0],
                                [np.sqrt(3)/2, np.sqrt(3)/2,0]
                                ,[0,0,1]])
        # hexagonal = np.array([[posHexagonal[0][0]],
        #                       [posHexagonal[0][1]],
        #                       [1]])
        posCartesian = np.matmul(linearTrans,posHexagonal)
        return posCartesian
    
    def sinCos(self,angle):
        r = np.radians(angle)
        return np.cos(r), np.sin(r)
    
    def Tranformation2D(self,rotation, translation):
        # rotation is a 1x1 vector repesent as [theta] 
        # theta is the rotation angle around z-axis
        # translation is a 2x1 vector repesent as [x,y]
        zC, zS = self.sinCos(rotation[0])
        dX = translation[0]
        dY = translation[1]
        Translate_matrix = np.array([[1, 0, dX],
                                    [0, 1, dY],
                                    [0, 0, 1]])
        Rotate_Z_matrix = np.array([[zC, -zS, 0],
                                    [zS, zC, 0],
                                    [0, 0, 1]])
        Tranformation_matrix = np.matmul(Rotate_Z_matrix,Translate_matrix)
        # return np.matmul(Tranformation_matrix,self.curPos)
        return Tranformation_matrix
    
        
    def hTranformation2D(self,rotation, translation):
        # rotation is a 1x1 vector repesent as [theta] 
        # theta is the rotation angle around z-axis
        # translation is a 2x1 vector repesent as [x,y]
        zC, zS = self.sinCos(rotation[0])
        dX = translation[0]
        dY = translation[1]
        Tranform_matrix = np.array([[zC, -zS, dX],
                                    [zS, zC, dY],
                                    [0, 0, 1]])
        # return np.matmul(Tranformation_matrix,self.curPos)
        return Tranform_matrix
    
    def test(self):
        print('-------*1*---------')
        print(f'self.curPos(old) =\n  {self.posCar}\n')
        print(f'self.hexPos(old) =\n  {self.posHex}\n')
        self.posCar = np.matmul(self.tranformationMatrix,self.posCar)
        self.posHex = self.car2hex(self.posCar)
        print(f'self.tranformationMatrix =\n  {self.tranformationMatrix}\n')
        print(f'self.curPos(New) =\n  {self.posCar}\n')
        print(f'self.hexPos(New) =\n  {self.posHex}\n')
        print('-------*1*---------')

        # print('-------*2*---------')
        # print(f'self.curPos(old) =\n  {self.posCar}\n')
        # print(f'self.hexPos(old) =\n  {self.posHex}\n')
        # self.tranformationMatrix = np.matmul(self.tranformationMatrix,self.Tranformation2D([60],[0,0]))
        # print(f'self.tranformationMatrix =\n  {self.tranformationMatrix}\n')
        # self.posCar = np.matmul(self.tranformationMatrix,self.posCar)
        # self.posHex = self.car2hex(self.posCar)
        # print(f'self.curPos(New) =\n  {self.posCar}\n')
        # print(f'self.hexPos(New) =\n  {self.posHex}\n')
        # print('-------*2*---------')
        
        # print('-------*2*---------')
        # # print(f'self.curPos(old) =\n  {self.posCar}\n')
        # zC, zS = self.sinCos(60)
        # Rotate_Z_matrix = np.array([[zC, -zS, 0],
        #                             [zS, zC, 0],
        #                             [0, 0, 1]])
        # # self.tranformationMatrix = np.matmul(self.hTranformation2D([60],[0,0]),self.tranformationMatrix)
        # print(f'self.tranformationMatrix =\n  {self.tranformationMatrix}\n')
        # self.tranformationMatrix = np.matmul(Rotate_Z_matrix,self.tranformationMatrix)
        # print(f'self.tranformationMatrix =\n  {self.tranformationMatrix}\n')
        # self.posCar = np.matmul(self.tranformationMatrix,self.posCar)
        # print(f'self.curPos(New) =\n  {self.posCar}\n')
        # # print(f'self.hexPos(New) =\n  {self.pos2idx(self.posCar)}\n')
        # print('-------*2*---------')
        

mytest = MyBeeBot(np.array([[7.5,-4.330127018922193]]))
# mytest = MyBeeBot(np.array([[0,-5]]))
# mytest = MyBeeBot(np.array([[1,-4]]))
# W = np.array([[5, 2], [5, 4]])
mytest.test()
# print(mytest.posHex)
# print('-------*1*---------')
# print(mytest.pos2idx(mytest.posCar))
# print('-------*2*---------')
# print(mytest.posCar)
# print('-------*3*---------')
# print(mytest.tranformationMatrix)
# print('-------*4*---------')
# mytest.test()

# print(mytest.idx2pos(0,-5))
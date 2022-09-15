#!/usr/bin/python3
from re import S
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
        # W is wall
        self.posHex = np.array(a_i).reshape(2,1)
        self.posCar = self.hex2car(self.posHex)
        # print('HexPos is \n', self.posHex)
        # print('CarPos is \n', self.posCar)
        
        # translation matrix
        self.transMatrix = self.hex2car(np.array([1,1]).reshape(2,1))
        # print('Translation Matrix is \n', self.transMatrix)
        
    
    def trackBeeBot(self, com, W):
        # a_i is initial position   
        # com is command {'0'->stop, '1'->forward, '2'->backward, '3'->turn right, '4'->turn left}
        # W is wall
        # A is the position of the BeeBot in Hexagonal coordinate
        A = np.array(self.posHex)
        P = np.array(self.posCar)
        
        # clear command '0' in com because it is not moving
        com = com.replace('0','')
        
        for c in com :
            if c == '1':
                self.posCar = self.posCar + self.transMatrix
                if self.checkCollision(W, self.posCar):
                    print('Collision Detected')
                else:
                    self.posHex = self.car2hex(self.posCar)
                    A = np.append(A, self.posHex, axis=1)
                    P = np.append(P, self.posCar, axis=1)
            elif c == '2':
                self.posCar = self.posCar - self.transMatrix
                if self.checkCollision(W, self.posCar):
                    print('Collision Detected')
                else:
                    self.posHex = self.car2hex(self.posCar)
                    A = np.append(A, self.posHex, axis=1)
                    P = np.append(P, self.posCar, axis=1)
            elif c == '3':
                self.transMatrix = self.RotationalMatrix(self.transMatrix, [60])
            elif c == '4':
                self.transMatrix = self.RotationalMatrix(self.transMatrix, [-60])
        return A , P
    
    def checkCollision(self, W, posCar):
        posHex = self.car2hex(posCar)
        if any((posHex[:, None] == W).all(-1).any(1)):
            return True
        else:
            return False
        
        # # ฝากไว้ก่อนนะครับ ผมยังไม่ได้ทำ
        # print('W is \n', W.T)
        # posHex = self.car2hex(posCar)
        # print('HexPos is \n', posHex.T)
        # print(any((posHex.T == W.T).all(1)))
        # if any((posHex.T == W.T).all(1)):
        #     return True
        # else:
        #     return False
        
    
    def car2hex(self, posCartesian):
        linearTrans = np.array([[1/3,np.sqrt(3)/3]
                                ,[-1/3, np.sqrt(3)/3]])
        poshexagonal = np.matmul(linearTrans,posCartesian)
        return poshexagonal
    
    def hex2car(self, posHexagonal):
        linearTrans = np.array([[3/2,-3/2],
                                [np.sqrt(3)/2, np.sqrt(3)/2]])
        posCartesian = np.matmul(linearTrans,posHexagonal)
        return posCartesian
    
    def sinCos(self,angle):
        r = np.radians(angle)
        return np.cos(r), np.sin(r)
    
    def RotationalMatrix(self,translationMatrix,rotation):
        # rotation is a 1x1 vector repesent as [theta] 
        # theta is the rotation angle around z-axis
        zC, zS = self.sinCos(rotation[0])
        Rotate_Z_matrix = np.array([[zC, -zS],
                                    [zS, zC]])
        return np.matmul(Rotate_Z_matrix,translationMatrix)
    
# Test Case 8
testBot = MyBeeBot([0, 0])
C = "10441234440243414302402101013000434202014031330420220203022123020314412243430134444402112342032140024"
W = np.array([[-1, 0, -2, 0, -4, -5, 5, -1, -2, 2, 0, -1, 5, -2], [1, 0, -1, 5, -2, 2, -3, 5, 5, 1, 5, -1, 5, -2]])
A, P = testBot.trackBeeBot(C, W)
print('----------------')
print(A)
print('----------------')
print(P)


# A = np.array([[1,4],[2,5],[3,6]])
# B = np.array([[1,4],[3,6],[7,8]])
# print('W is \n', W)
# print('-'*50)
# print('Pos is \n',np.append(testBot.posCar, testBot.posHex, axis=1))
# print('-'*50)
# print('A.T is \n', A.T)
# print('----------------')
# print('B.T is \n', B.T)
# print('----------------')
# m = (A.T[:, None] == B.T).all(-1).any(1)
# print(any(m))
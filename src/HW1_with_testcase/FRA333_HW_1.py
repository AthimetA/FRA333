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
        # translation matrix
        self.transMatrix = self.hex2car(np.array([1,1]).reshape(2,1))
        
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
                if not self.checkCollision(W, self.posCar + self.transMatrix):
                    self.posCar = self.posCar + self.transMatrix
                    self.posHex = self.car2hex(self.posCar)
                    A = np.append(A, self.posHex, axis=1)
                    P = np.append(P, self.posCar, axis=1)
            elif c == '2':
                if not self.checkCollision(W, self.posCar - self.transMatrix):
                    self.posCar = self.posCar - self.transMatrix
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
        # 1st method
        if (posHex.T[:, None] == W.T).all(-1).any():
            return True
        else:
            return False
        # 2nd method
        # if any((posHex.T == W.T).all(1)):
        #     return True
        # else:
        #     return False
        
    def car2hex(self, posCartesian):
        linearTrans = np.array([[1/3,np.sqrt(3)/3]
                                ,[-1/3, np.sqrt(3)/3]])
        poshexagonal = np.matmul(linearTrans,posCartesian)
        ## round to nearest integer and convert to int
        poshexagonal = np.rint(poshexagonal).astype(int)
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
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

        # All Position in Cartesian coordinate or Hexagonal coordinate are 2x1 vector
        # a_i is the position of the BeeBot in Hexagonal coordinate
        self.posHex = np.array(a_i).reshape(2,1)
        # convert a_i from Hexagonal coordinate to Cartesian coordinate
        self.posCar = self.hex2car(self.posHex)

        # Translation matrix describes the movement of the BeeBot in Cartesian coordinate
        # from the initial position to the next position in Hexagonal coordinate it is [+1,+1] because the BeeBot moves in the direction of the positive x-axis and the positive y-axis
        # e.g. from [0,0] to [1,1] for 1 forward command 
        # then convert [1,1] to Cartesian coordinate ----> [1,1] Hexagonal coordinate = [0, np.sqrt(3)] Cartesian coordinate
        # We will use this matrix to calculate the next position in Cartesian coordinate becuase command is in Cartesian coordinate (turn right, turn left is +-60 degree)
        # and then convert back to Hexagonal coordinate 
        self.transMatrix = self.hex2car(np.array([1,1]).reshape(2,1))
        
    def trackBeeBot(self, com, W):
        # a_i is initial position   
        # com is command {'0'->stop, '1'->forward, '2'->backward, '3'->turn right, '4'->turn left}
        # W is wall
        # A is the position of the BeeBot in Hexagonal coordinate
        # P is the position of the BeeBot in Cartesian coordinate
        A = np.array(self.posHex)
        P = np.array(self.posCar)
        # clear command '0' in com because it is not moving, does not effect the position and does not need to be plotted
        com = com.replace('0','')
        for c in com :
            if c == '1': # forward command
                # add the translation matrix to the current position in Cartesian coordinate
                # then check if the next position is in the wall or not
                if not self.checkCollision(W, self.car2hex(self.posCar + self.transMatrix)):
                    # if the next position is not in the wall
                    self.posCar = self.posCar + self.transMatrix
                    self.posHex = self.car2hex(self.posCar)
                    # add the next position to the list of position
                    A = np.append(A, self.posHex, axis=1)
                    P = np.append(P, self.posCar, axis=1)
            elif c == '2': # backward command
                # subtract the translation matrix to the current position in Cartesian coordinate
                # then check if the next position is in the wall or not
                if not self.checkCollision(W, self.car2hex(self.posCar - self.transMatrix)):
                    # if the next position is not in the wall
                    self.posCar = self.posCar - self.transMatrix
                    self.posHex = self.car2hex(self.posCar)
                    # add the next position to the list of position
                    A = np.append(A, self.posHex, axis=1)
                    P = np.append(P, self.posCar, axis=1)
            elif c == '3': # turn left command (+60 degree)
                self.transMatrix = self.RotationalMatrix(self.transMatrix, [60])
            elif c == '4': # turn right command (-60 degree)
                self.transMatrix = self.RotationalMatrix(self.transMatrix, [-60])
        return A , P

    def checkCollision(self, W, posHexagonal):
        # 1st method
        # check if the next position is in the wall or not
        # W is a list of wall defult is [[x1,x2,x3,x4,...,xn],[y1,y2,y3,y4,...,yn]]
        # posHexagonal is a 2x1 vector = [[i],[j]]
        # W transpose is a list of wall in [[x1,y1],[x2,y2],[x3,y3],[x4,y4],...,[xn,yn]]
        # posHexagonal transpose is  = [i,j] ---> (posHexagonal.T[:, None]) = [[i,j]]
        # e.g
        # A is       B is       | A[:, None] is more like [[1 4],None]  because A[:, :] is  == A
        #  [[1 4]     [[1 4]    |     [[[1 4]]                                   [[1 4]                                  
        #  [2 5]      [3 6]     |     [[2 5]]                                     [2 5]
        #  [3 6]]     [1 8]]    |     [[3 6]]]                                    [3 6]]
        # ----------------
        # (A[:, None] == B) is  | when apply all(-1) to the result it will return True if all element in the sub-array is True
        #  [[[ True  True]      |         [[ True  True]  ---> 1 == 1 (idx[0][0]) and 4 == 4 (idx[0][1])  apply.all(-1)--->    [True
        #   [False False]       |          [False False]  ---> 1 != 3 (idx[1][0]) and 4 != 6 (idx[1][1])  apply.all(-1)--->    False
        #   [True False]]       |          [True  False]] ---> 1 == 1 (idx[2][0]) and 4 != 8 (idx[2][1])  apply.all(-1)--->    False] |
        #                       |                                                                                                     |
        #  [[False False]       | then (A[:, None] == B).all(-1) is                                                                   |
        #   [False False]       |       [[ True False False] ----> [1,4] in rol 0 and not in rol 1,2   <------------------------------|
        #   [False False]]      |       [False False False]  ----> [2,5] in rol 0,1,2
        #                       |       [False True False]]  ----> [3,6] in rol 1 and not in rol 0,2
        #  [[False False]       |
        #   [ True  True]       |
        #   [False False]]]     |
        #----------------
        # (A[:, None] == B).all(-1).any(-1) is                                                  | in our case it was only one element in the list
        #  [ True False True]                                                                   |  so .any(-1) is not needed then we can use .any()
        # if we choose any() insted of any(-1) will return True if any of the values is True    |
        # any((A[:, None] == B).all(-1).any(-1)) is [ True False True] ---> True                |
        # True (done T-T)                                                                       |
        if (posHexagonal.T[:, None] == W.T).all(-1).any():
            return True
        else:
            return False 
        # 2nd method
        # if any((posHexagonal.T == W.T).all(1)):
        #     return True
        # else:
        #     return False
        
    def car2hex(self, posCartesian):
        # posCartesian is a 2x1 vector = [x,y]
        # posHexagonal is a 2x1 vector = [i,j]
        # linear transformation matrix is a 2x2 matrix = [[1/3, 1/np.sqrt(3],[-1/3, 1/np.sqrt(3]]
        linearTrans = np.array([[1/3, 1/np.sqrt(3)]
                                ,[-1/3, 1/np.sqrt(3)]])
        # posHexagonal = linear transformation matrix * posCartesian
        poshexagonal = np.matmul(linearTrans,posCartesian)
        # round to nearest integer and convert to int
        poshexagonal = np.rint(poshexagonal).astype(int)
        return poshexagonal
    
    def hex2car(self, posHexagonal):
        # posHexagonal is a 2x1 vector = [i,j]
        # posCartesian is a 2x1 vector = [x,y]
        # linear transformation matrix is a 2x2 matrix = [[3/2, -3/2],[np.sqrt(3)/2,np.sqrt(3)/2]]
        linearTrans = np.array([[3/2,-3/2],
                                [np.sqrt(3)/2, np.sqrt(3)/2]])
        # posCartesian = linear transformation matrix * posHexagonal
        posCartesian = np.matmul(linearTrans,posHexagonal)
        return posCartesian
    
    def sinCos(self,angle):
        # angle is in degree
        r = np.radians(angle)
        # return sin and cos of angle in radian
        return np.cos(r), np.sin(r)
    
    def RotationalMatrix(self,translationMatrix,rotation):
        # rotation is a 1x1 vector repesent as [theta] 
        # theta is the rotation angle around z-axis
        # first get sin and cos of theta in radian
        zC, zS = self.sinCos(rotation[0])
        # rotational matrix is a 2x2 matrix = [[cos(theta), -sin(theta)],[sin(theta), cos(theta)]]
        Rotate_Z_matrix = np.array([[zC, -zS],
                                    [zS, zC]])
        # translation matrix is a 2x1 vector = [x,y]
        # translation matrix = rotational matrix * translation matrix
        # return the new translation matrix after make a rotation
        return np.matmul(Rotate_Z_matrix,translationMatrix)
#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the beautifulDays function below.
def beautifulDays(i, j, k):
    n = 0
    l = 0
    count = 0
    for z in range(i,j+1):
        n =0
        rev = 0
        l = z
        while l!=0:
            n = l%10
            rev = (rev * 10) + n
            l = l//10
            
            
            
        f = int(abs(z - rev))    
        if f%k == 0:
            count+=1
    print(count)
if __name__ == '__main__':


    ijk = input().split()

    i = int(ijk[0])

    j = int(ijk[1])

    k = int(ijk[2])

    result = beautifulDays(i, j, k)

    

    


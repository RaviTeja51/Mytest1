#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the viralAdvertising function below.
def viralAdvertising(n):
    i = 1
    l1 = 0
    l = (5//2)
    l1 = l
    s = l * 3
    i+=1
    while i <= n :
        l = (s//2)
        l1 += l
        s = l * 3
        i+=1
    print(l1) 
        

if __name__ == '__main__':
    

    n = int(input())

    result = viralAdvertising(n)

    

    


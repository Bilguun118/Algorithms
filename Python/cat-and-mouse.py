#!/bin/python
from __future__ import print_function
import os


def catAndMouse(x, y, z):
    #Хоёр тооны үлдэгдлийг олж харьцуулалт хийх.
    distance_a = abs(x - z)
    distance_b = abs(y - z)
    if distance_a > distance_b:
        return 'Cat B'
    elif distance_a == distance_b:
        return 'Mouse C'
    else:
        return 'Cat A'


if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        xyz = input().split()

        x = int(xyz[0])

        y = int(xyz[1])

        z = int(xyz[2])

        result = catAndMouse(x, y, z)

        f.write(result + '\n')

    f.close()

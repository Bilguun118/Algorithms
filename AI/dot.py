'''
Matrix-Vector Dot Product

Write a Python function that computes the dot product of a matrix and a vector. 
The function should return a list representing the resulting vector 
if the operation is valid, or -1 if the matrix and vector dimensions 
are incompatible. A matrix (a list of lists) can be dotted with 
a vector (a list) only if the number of columns in the matrix equals 
the length of the vector. For example, an n x m matrix requires 
a vector of length m.
'''

import pandas as pd
import numpy as np

def matrix_dot_vector(a: list[list[int|float]], b: list[int|float]):
	df1 = pd.DataFrame(a)
	v1 = np.array(b)
    dot_product = df1.dot(v1)
    return dot_product.tolist()


if __name__ == "__main__":
    print(matrix_dot_vector([[1, 2, 3], [4, 5, 6]], [1, 2, 3]))
    print(matrix_dot_vector([[1, 2], [2, 4], [6, 8], [12, 4]], [1, 2, 3]))

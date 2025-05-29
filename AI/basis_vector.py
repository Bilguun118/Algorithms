'''
Given basis vectors in two different bases B and C for R^3, 
write a Python function to compute the transformation matrix P from basis B to C.
'''

import numpy as np
def transform_basis(B: list[list[int]], C: list[list[int]]) -> list[list[float]]:
	b_arr = np.array(B)
	c_arr = np.array(C)
	c_inv = np.linalg.inv(c_arr)
	P = c_inv @ b_arr
	return np.round(P, 4)

if __name__ == "__main__":
	print(transform_basis([[1, 2, 3], [4, 5, 6], [7, 8, 9]], [[1, 0, 0], [0, 1, 0], [0, 0, 1]]))

'''
Write a Python function that reshapes a given matrix into a specified shape. if it cant be reshaped return back an empty list [ ]
'''

import numpy as np

def reshape_matrix(a: list[list[int|float]], new_shape: tuple[int, int]) -> list[list[int|float]]:
	#Write your code here and return a python list after reshaping by using numpy's tolist() method
	arr = np.array(a)
	try:
		reshaped_matrix = arr.reshape(new_shape)
		return reshaped_matrix.tolist()
	except Exception as e:
		return []

if __name__ == "__main__":
	print(reshape_matrix([[1,2,3],[4,5,6]], (2,3)))

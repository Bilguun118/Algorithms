'''
Write a Python function that multiplies a matrix by a scalar and returns the result.
'''
import numpy as np
def scalar_multiply(matrix: list[list[int|float]], scalar: int|float) -> list[list[int|float]]:
	arr = np.array(matrix)
    result = arr * scalar
    return result.tolist()

if __name__ == "__main__":
    print(scalar_multiply([[1,2,3],[4,5,6]], 2))
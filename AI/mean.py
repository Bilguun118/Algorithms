'''
Write a Python function that calculates the mean of a matrix either by row or by column,
based on a given mode. The function should take a matrix (list of lists) and a mode 
('row' or 'column') as input and return a list of means according to the specified mode.
'''
import numpy as np
def calculate_matrix_mean(matrix: list[list[float]], mode: str) -> list[float]:
	if mode == 'column':
        return np.mean(matrix, axis=0).tolist()
    elif mode == 'row':
        return np.mean(matrix, axis=1).tolist()
    else:
        return []


if __name__ == "__main__":
    print(calculate_matrix_mean([[1,2,3],[4,5,6]], 'row'))
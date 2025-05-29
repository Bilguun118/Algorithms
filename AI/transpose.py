# Write a Python function that computes the transpose of a given matrix. (NOTE: Flipping Column and Rows)
import pandas as pd
def transpose_matrix(a: list[list[int|float]]) -> list[list[int|float]]:
	b = pd.DataFrame(a)
	return b.T.values.tolist()


if __name__ == "__main__":
    print(transpose_matrix([[1,2,3],[4,5,6]]))
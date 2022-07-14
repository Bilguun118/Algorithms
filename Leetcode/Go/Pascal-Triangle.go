package Go

func generate(numRows int) [][]int {
	var result [][]int
	for idx := 0; idx < numRows; idx++ {
		row := []int{}
		for val := 0; val < idx+1; val++ {
			if val == 0 || val == idx {
				row = append(row, 1)
			} else if idx > 1 {
				row = append(row, result[idx-1][val-1]+result[idx-1][val])
			}
		}
		result = append(result, row)
	}
	return result
}

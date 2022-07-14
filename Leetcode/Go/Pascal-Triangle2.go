package Go

func getRow(rowIndex int) []int {
	row := make([]int, rowIndex+1)
	row[0] = 1
	for idx := 1; idx <= rowIndex; idx++ {
		row[idx] = row[idx-1] * (rowIndex - idx + 1) / idx
	}
	return row	
}

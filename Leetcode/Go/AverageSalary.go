package Go

// Average Salary Solution
func average(salary []int) float64 {
	if len(salary) <= 0 {
		return float64(0)
	}
	var count int
	length := len(salary) - 2
	max, min := salary[0], salary[0]
	// Determine Minimum and Maximum Value from Array
	for idx := 0; idx < len(salary); idx++ {
		if salary[idx] > max {
			max = salary[idx]
		}
		if salary[idx] < min {
			min = salary[idx]
		}
		// Sum all numbers
		count += salary[idx]
	}
	count = count - (max + min)
	// Find Average
	return float64(count) / float64(length)
}

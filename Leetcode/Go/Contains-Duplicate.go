package Go

func containsDuplicate(nums []int) bool {
	//Making Boolean Map with length of input slice
	result := make(map[int]bool, len(nums))
	//Iterating over slice
	for _, idx := range nums {
		//Condition for assigning indices to value in boolean
		if _, found := result[idx]; found {
			return true
		}
		result[idx] = true
	}
	return false
}

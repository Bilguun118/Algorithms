package Go

func removeDuplicates(nums []int) int {
	if len(nums) < 2 {
		return len(nums)
	}
	prev, next := nums[0], 1
	for idx := 1; idx < len(nums); idx++ {
		if nums[idx] != prev {
			next, prev, nums[next] = next+1, nums[idx], nums[idx]
		}
	}
	return next
}

//Call removeDuplicates in Main Function

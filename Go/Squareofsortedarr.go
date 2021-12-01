package Go

func sortedSquares(nums []int) []int {
	res := make([]int, len(nums))
	le, ri := 0, len(nums)-1
	var lastIndx int = len(nums) - 1
	for le <= ri {
		if nums[le]*nums[le] > nums[ri]*nums[ri] {
			res[lastIndx] = nums[le] * nums[le]
			le++
		} else {
			res[lastIndx] = nums[ri] * nums[ri]
			ri--
		}
		lastIndx--
	}
	return res
}

//Call sortedSquares in Main Function

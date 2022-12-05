package Go

// Finding Maximum sub array from array
func maxSubArray(nums []int) int {
	if len(nums) == 0 {
		return 0
	}
	// Initialize first element of slice
	maximum_sum := nums[0]
	// Start from second element
	for idx := 1; idx < len(nums); idx++ {
		// if previous element is larger than 0
		if nums[idx-1] > 0 {
			// Add Corresponding value
			nums[idx] += nums[idx-1]
		}
		// if current value has become largest change value of maximum
		if nums[idx] > maximum_sum {
			maximum_sum = nums[idx]
		}
	}
	return maximum_sum
}

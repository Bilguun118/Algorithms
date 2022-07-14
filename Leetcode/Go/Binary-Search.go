package Go

//Binary search Function
func search(nums []int, target int) int {
	if len(nums) == 0 {
		return -1
	}
	//Left to right of array
	left, right := 0, len(nums)-1
	var midpoint int
	for left <= right {
		//Midpoint of array
		midpoint = left + (right-left)>>1
		if nums[midpoint] == target {
			return midpoint
		} else if nums[midpoint] > target {
			right = midpoint - 1
		} else {
			left = midpoint + 1
		}
	}
	return -1
}

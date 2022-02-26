package Go

func searchInsert(nums []int, target int) int {
	left, right := 0, len(nums)-1
	var middle int
	for left <= right {
		middle = left + (right-left)>>1
		if target == nums[middle] {
			return middle
		} else if target > nums[middle] {
			left = middle + 1
		} else {
			right = middle - 1
		}
	}
	return left
}

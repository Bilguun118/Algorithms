package Go

func rotate(nums []int, k int) {
	//Getting How many Reverse Times
	k = k % len(nums)
	reverse(nums, 0, len(nums)-1)
	reverse(nums, 0, k-1)
	reverse(nums, k, len(nums)-1)
}

//Reversing Function
func reverse(nums []int, start, end int) {
	// From Start to End loop
	for start < end {
		temp := nums[start]
		nums[start] = nums[end]
		nums[end] = temp
		start++
		end--
	}
}

//Call rotate Function in Main Function in Golang

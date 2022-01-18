package Go

func majorityElement(nums []int) int {
	var majority_element, counter int = nums[0], 1
	for idx := 1; idx < len(nums); idx++ {
		if counter == 0 {
			majority_element = nums[idx]
		}
		if nums[idx] == majority_element {
			counter++
		} else {
			counter--
		}
	}
	return majority_element
}

//Call majorityElement Function in Main Function

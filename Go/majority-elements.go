package Go

func majorityElement(nums []int) int {
	//Counter and Chaning Majority Element Variables
	var majority_element, counter int = nums[0], 1
	//Looping through Slices to get Element
	for idx := 1; idx < len(nums); idx++ {
		if counter == 0 {
			majority_element = nums[idx]
		}
		//Checking if each element is equal to current majority Element
		if nums[idx] == majority_element {
			counter++
		} else {
			counter--
		}
	}
	return majority_element
}

//Call majorityElement Function in Main Function

package Go

func removeElements(nums []int, val int) int {
	//Counting Variable
	var count int
	//Looping through nums array
	for idx := 0; idx < len(nums); idx++ {
		//Checking if index of nums has equal to val (target)
		if nums[idx] != val {
			//If condition is met changing it into count
			nums[count] = nums[idx]
			//Incrementing count
			count++
		}
	}
	return count
}

//Call removeElements Function in main go

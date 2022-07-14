package main

func OnePlus(digits []int) []int {
	//Getting Length of Slice
	number := len(digits)
	//Iterating Over Slice to Modify Value
	for idx := number - 1; idx >= 0; idx-- {
		//if Element of digits has lower value than 9
		if digits[idx] < 9 {
			//Increment value by one
			digits[idx]++
			//Return It's Value
			return digits
		}
		//Out of the If Statement make elements of digits equal to zero
		digits[idx] = 0
	}
	//Make New slice of int with length digits + 1
	result := make([]int, number+1)
	//Make First Element of Slice equal to one
	result[0] = 1
	//Returning Result
	return result
}

//Call OnePlus Function in main Function

package Go

func twoSumInputSorted(nums []int, target int) []int {
	//Init Hashmap with length of testcase array
	store := make(map[int]int, len(nums))
	//Looping through nums array
	for idx, val := range nums {
		if store[target-val] != 0 {
			return []int{store[target-val], idx + 1}
		}
		store[val] = idx + 1
	}
	return nil

}

//Call twoSumInputSorted function in main function

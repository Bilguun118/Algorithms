package Go

func intersection(nums1 []int, nums2 []int) []int {
	//Init Hashmap
	hashmap := map[int]bool{}
	//Result Slice
	var result []int
	//Making First Values and Storing it with true value
	for _, idx := range nums1 {
		hashmap[idx] = true
	}
	//Iterating Over second Slice to get same values
	for _, idx := range nums2 {
		if hashmap[idx] {
			delete(hashmap, idx)
			result = append(result, idx)
		}
	}
	return result
}

//Call intersection Function in Main Function File

package Go

func containsNearbyDuplicate(nums []int, k int) bool {
	//Init Boolean Map
	result := make(map[int]bool, len(nums))
	//Conditions to return false
	if len(nums) <= 1 {
		return false
	}
	if k <= 0 {
		return false
	}
	//Iterating Over Slice
	for idx, val := range nums {
		//Mapping indices to Value with found Variable
		if _, found := result[val]; found {
			return true
		}
		//Setting true
		result[val] = true
		if len(result) == k+1 {
			delete(result, nums[idx-k])
		}
	}
	return false
}

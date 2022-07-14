package Go

func intersect(nums1 []int, nums2 []int) []int {
	//Storing value with key and value pair with integer numbers
	mapping := map[int]int{}
	//Result Slice
	var result []int
	//Iterating over nums1 slice
	for _, idx := range nums1 {
		mapping[idx]++
	}
	//Iterating Over nums2 Slice appending intersection to result
	for _, idx := range nums2 {
		if mapping[idx] > 0 {
			result = append(result, idx)
			mapping[idx]--
		}
	}
	return result
}

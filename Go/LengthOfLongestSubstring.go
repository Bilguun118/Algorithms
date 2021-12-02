package Go

func lengthOfLongestSubstring(s string) int {
	// if value is in string is empty return 0
	if s == "" {
		return 0
	}
	//Window Sliding Method to check longest substrings
	left, right := 0, 0
	var maxLength int = 0
	var res [256]bool
	for left < len(s) {
		if res[s[right]] {
			res[s[left]] = false
			left++
		} else {
			res[s[right]] = true
			right++
		}
		if maxLength < right-left {
			maxLength = right - left
		}
		if left+maxLength >= len(s) || right >= len(s) {
			break
		}
	}
	return maxLength
}

//Call lengthOfLongestSubstring function in Main function

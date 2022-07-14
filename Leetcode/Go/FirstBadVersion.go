package Go

//External Function provided By Leetcode This is Sample
func isBadVersion(number int) bool {
	return false
}

//Function that checks if all versions are bad or not
func firstBadVersion(n int) int {
	low, high := 1, n
	var middle int
	for low < high {
		middle = (low + high) >> 1
		if isBadVersion(middle) {
			high = middle
		} else {
			low = middle + 1
		}
	}
	return low
}

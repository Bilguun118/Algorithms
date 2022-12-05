package Go

// Faster Solution Time Complexity O(1) Solution
func countOddsR(low int, high int) int {
	var mid int = (high - low) / 2
	if high%2 != 0 || low%2 != 0 {
		mid += 1
	}
	return mid
}

// Time Complexity O(N) Solution
func countOdds(low int, high int) int {
	var count int
	for idx := low; idx <= high; idx++ {
		if idx%2 != 0 {
			count += 1
		}
	}
	return count
}

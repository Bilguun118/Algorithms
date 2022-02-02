package Go

func countPrimes(n int) int {
	//Checking base case for input number
	if n < 1 {
		return 0
	}
	//Counting Prime Variable and Boolean Slice to keep track of Prime Numbers
	var count int = 0
	result := make([]bool, n)
	//Init first values of slice
	for idx := 0; idx < len(result); idx++ {
		result[idx] = true
	}
	//Using Sieve of Erastosthenes Algorithm
	for idx := 2; idx*idx < len(result); idx++ {
		if result[idx] {
			for val := idx; val*idx < len(result); val++ {
				result[idx*val] = false
			}
		}
	}
	//Keep track of Prime Numbers into count variable
	for idx := 2; idx < len(result); idx++ {
		if result[idx] {
			count++
		}
	}
	//Returning Count of Prime Numbers
	return count
}

//Call countPrime Function in Main Function in Main Go package

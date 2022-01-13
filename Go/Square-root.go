package main

func square_root(x int) int {
	result := x
	for result*result > x {
		result = (result + x/result) / 2
	}
	return result
}

//Call square_root function in Main Function to execute

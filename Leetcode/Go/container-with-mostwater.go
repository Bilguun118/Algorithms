package Go

//maxArea Function
func maxArea(height []int) int {
	//Init Max Area (Result)
	maxAr := 0
	//Left and Right Pointer From Start and End of an Array
	var left_point int = 0
	var right_point int = len(height) - 1
	//Getting Closer to Left to Right
	for left_point < right_point {
		//Calculating Width of an Array with start and End of Array pointer
		width := right_point - left_point
		//Init High
		high := 0
		if height[left_point] < height[right_point] {
			high = height[left_point]
			left_point++
		} else {
			high = height[right_point]
			right_point--
		}
		temp := width * high
		if temp > maxAr {
			maxAr = temp
		}
	}
	return maxAr
}

//Call maxArea Function in Main function of Go Project

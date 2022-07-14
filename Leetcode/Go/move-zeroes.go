package Go

func moveZeroes(nums []int) {
	if len(nums) == 0 || len(nums) == 1 {
		return
	}
	var prt int = 0
	for idx := 0; idx < len(nums); idx++ {
		if nums[idx] != 0 {
			if idx != prt {
				nums[idx], nums[prt] = nums[prt], nums[idx]
			}
			prt++
		}
	}
}

//Call moveZeroes Function in Main Function of The Code

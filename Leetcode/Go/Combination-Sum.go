package Go

import "sort"

func combinationSum(candidates []int, target int) [][]int {
	if len(candidates) == 0 {
		return [][]int{}
	}
	comb, result := []int{}, [][]int{}
	sort.Ints(candidates)
	findCombinations(candidates, target, 0, comb, &result)
	return result
}

func findCombinations(nums []int, target, index int, comb []int, result *[][]int) {
	if target <= 0 {
		if target == 0 {
			temp := make([]int, len(comb))
			copy(temp, comb)
			*result = append(*result, temp)
		}
		return
	}
	for idx := index; idx < len(nums); idx++ {
		if nums[idx] > target {
			break
		}
		comb := append(comb, nums[idx])
		findCombinations(nums, target-nums[idx], idx, comb, result)
		comb = comb[:len(comb)-1]
	}
}

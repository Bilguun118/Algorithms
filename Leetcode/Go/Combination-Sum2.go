package Go

import "sort"

func combinationSum2(candidates []int, target int) [][]int {
	if len(candidates) == 0 {
		return [][]int{}
	}
	comb, result := []int{}, [][]int{}
	sort.Ints(candidates)
	findCombinations2(candidates, target, 0, comb, &result)
	return result
}

func findCombinations2(candidates []int, target, index int, comb []int, result *[][]int) {
	if target == 0 {
		temp := make([]int, len(comb))
		copy(temp, comb)
		*result = append(*result, temp)
		return
	}
	for idx := index; idx < len(candidates); idx++ {
		if idx > index && candidates[idx] == candidates[idx-1] {
			continue
		}
		if target >= candidates[idx] {
			comb = append(comb, candidates[idx])
			findCombinations2(candidates, target-candidates[idx], idx+1, comb, result)
			comb = comb[:len(comb)-1]
		}
	}
}

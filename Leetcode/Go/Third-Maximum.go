package Go

import "math"

func thirdMax(nums []int) int {
	//Three variable Holding Math.MinInt64 value
	fir, sec, trd := math.MinInt64, math.MinInt64, math.MinInt64
	//Switching Logic for three variable
	for _, idx := range nums {
		if idx > fir {
			trd = sec
			sec = fir
			fir = idx
		} else if idx < fir && idx > sec {
			trd = sec
			sec = idx
		} else if idx < sec && idx > trd {
			trd = idx
		}
	}
	if trd == math.MinInt64 {
		return fir
	}
	return trd
}

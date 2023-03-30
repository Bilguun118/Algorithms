package Go

import "sort"

func threeSum(nums []int) [][]int {
	sort.Ints(nums)
	var res [][]int
	for indx := 0; indx < len(nums); indx++ {
		if indx > 0 && nums[indx] == nums[indx-1] {
			// This is Duplicate
			continue
		}
		lft := indx + 1
		rght := len(nums) - 1
		sum := 0 - nums[indx]
		for lft < rght {
			if nums[lft]+nums[rght] == sum {
				res = append(res, []int{nums[indx], nums[lft], nums[rght]})
				for lft < rght && nums[lft] == nums[lft+1] {
					lft++
				}
				for lft < rght && nums[rght] == nums[rght-1] {
					rght--
				}
				lft++
				rght--
			} else if nums[lft]+nums[rght] > sum {
				rght--
			} else {
				lft++
			}
		}
	}
	return res
}

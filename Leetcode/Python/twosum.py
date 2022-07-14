class Solution:
    def twoSum(self, nums, target) -> int:
        result = {}
        for i in range(len(nums)):
            diff = target - nums[i]
            if(result.get(diff) is not None):
                return [result.get(diff), i]
            else:
                result[nums[i]] = i

class Solution:
    def findClosestNumber(self, nums: List[int]) -> int:
        mini = nums[0]
        for i in range(1, len(nums)):
            if abs(nums[i]) < abs(mini):
                mini = nums[i]
        if mini < 0 and abs(mini) in nums:
            return abs(mini)
        return mini
class Solution:
    def minimumDifference(self, nums: List[int], k: int) -> int:
        nums.sort()

        mini = max(nums)
        for i in range(0, len(nums)-k+1):
            mini = min(mini, nums[i+k-1]-nums[i])

        return mini
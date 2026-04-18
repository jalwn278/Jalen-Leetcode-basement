class Solution:
    def distinctAverages(self, nums: List[int]) -> int:
        nums.sort()
        
        arr = []
        n = len(nums)
        for i in range(n//2):
            average = (nums[i] + nums[len(nums)-1-i]) / 2
            arr.append(average)

        arr = set(arr)
        return len(arr)
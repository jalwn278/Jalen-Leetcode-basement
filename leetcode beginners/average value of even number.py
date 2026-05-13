class Solution:
    def averageValue(self, nums: List[int]) -> int:
        arr = []
        count = 0
        for i in range(len(nums)):
            if nums[i] % 6 == 0:
                arr.append(nums[i])
                count += 1
        if count == 0:
            return 0
        return sum(arr) // len(arr)
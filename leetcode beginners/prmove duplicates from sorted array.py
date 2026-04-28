class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        index = 0
        count = 1
        for i in range(1, len(nums)):
            if nums[index] == nums[i]:
                continue
            else:
                index += 1
                nums[index] = nums[i]
                count +=1
        return count
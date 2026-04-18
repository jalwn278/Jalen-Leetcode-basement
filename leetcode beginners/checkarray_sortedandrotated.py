class Solution:
    def check(self, nums: List[int]) -> bool:
        x = 0
        n = len(nums)
        for i in range(n-1):
            if nums[i] > nums[i+1]:
                x = i + 1
                break
            

        origin = []
        for i in range(n):
            origin.append(nums[(i+x) % n])

        for i in range(n-1):
            if origin[i] > origin[i+1]:
                return False
        return True

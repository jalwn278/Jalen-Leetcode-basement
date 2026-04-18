class Solution:
    def minElement(self, nums: List[int]) -> int:
        mini = 36
        for _ in nums:
            count = 0
            tmp = _
            while (tmp > 0):
                count += tmp % 10
                tmp //= 10
            mini = min(count, mini)
        return mini
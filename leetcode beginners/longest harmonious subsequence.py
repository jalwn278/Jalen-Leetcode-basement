class Solution:
    def findLHS(self, nums: List[int]) -> int:
        freq = dict(int)
        res = 0
        for _ in nums:
            freq[_] += 1

        for num in freq:
            if num + 1 in freq:
                res = max(res, freq[num] + freq[num+1])

        return res
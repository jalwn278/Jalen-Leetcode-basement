class Solution:
    def countCommas(self, n: int) -> int:
        count = 0
        for i in range(n-999):
            count += 1
        return count
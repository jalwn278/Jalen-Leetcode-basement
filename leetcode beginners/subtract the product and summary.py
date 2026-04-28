class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        p, s = 1, 0
        while True:
            p = p * (n % 10)
            s += n % 10
            n = n // 10 
            if n <= 0:
                break
        return p-s
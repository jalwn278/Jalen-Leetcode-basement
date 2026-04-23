class Solution:
    def mySqrt(self, x: int) -> int:
        low, high = 0, x
        ans = -1

        while low <= high:
            mid = (low+high) // 2
            midsq = mid*mid

            if midsq == x:
                return mid
            elif midsq > x:
                high = mid - 1
            else:
                ans = mid
                low = mid + 1
            
        return ans
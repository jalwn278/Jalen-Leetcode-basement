class Solution:
    def findKthPositive(self, arr: List[int], k: int) -> int:
        
        #linear search
        arr_set = set(arr)
        # if arr is [1,2,3,6,7] after iterate arr k = 3, i must plus 3 in the base of 7 and it get the answer-10
        for i in range(1, k + len(arr) + 1):
            if i not in arr_set: k -= 1
            if k == 0: return i

        #bineary search
        beg, end = 0, len(arr)
        while beg < end:
            mid = (beg + end) // 2
            if arr[mid] - mid - 1 < k:
                beg = mid + 1
            else:
                end = mid
        return end + k
    
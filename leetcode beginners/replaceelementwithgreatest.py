class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        max = -1
        i = len(arr) - 1

        while i >= 0:
            tmp = arr[i]

            arr[i] = max
            if tmp > max:
                max = tmp
            
            i -= 1

        return arr
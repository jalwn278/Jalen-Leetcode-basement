class Solution:
    def largestInteger(self, nums: List[int], k: int) -> int:
        n = len(nums)
        
        # creaete a dict
        subarray_count = {}
        
        # Process all subarrays of size k
        for i in range(n - k + 1):
            # set would set[2, 2, 3] into [2, 3]
            for num in set(nums[i:i+k]):
                #count number's appearance in a subarray
                subarray_count[num] = subarray_count.get(num, 0) + 1
        
        # Find the largest integer that appears in exactly one subarray
        ans = -1
        for num, count in subarray_count.items():
            if count == 1 and num > ans:
                ans = num
        
        return ans
class Data():
    def __init__(self, value, reverse):
        self.value = value
        self.reverse = reverse

class Solution:
    def compare (self,a, b):
        if a.reverse > b.reverse:
            return True
        if a.reverse == b.reverse and a.value > b.value:
            return True
        return False 

    def reverse(self,x):
        ans = 0
        while (x):
            ans = ans << 1
            if (x & 1): #3 and 5 return 5. 3 & 5 == 011 & 101 return 001
                ans += 1
            x = x >> 1
        return ans

    def sortByReflection(self, nums: List[int]) -> List[int]:
        table = []
        for x in nums:
            table.append(Data(x, self.reverse(x)))

        for i in range(len(nums)-1):
            for j in range(len(nums)-1-i):
                if self.compare(table[j], table[j+1]):
                    table[j], table[j+1] = table[j+1], table[j]
        for i in range(len(nums)):
            nums[i] = table[i].value
        return nums
        

        
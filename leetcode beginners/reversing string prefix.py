class Solution:
    def reversePrefix(self, s: str, k: int) -> str:
        
        stack = []
        result = []
        for i in range(0, k):
            stack.append(s[i])

        while stack:
            result.append(stack.pop())

        if k == len(s):
            return ''.join(result)
        else:
            for i in range(k,len(s)):
                result.append(s[i])

        return ''.join(result)

        
        

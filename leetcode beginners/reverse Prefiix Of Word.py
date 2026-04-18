class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        stack = [] #use FILO 
        result = []

        index = 0
        while index < len(word):
            stack.append(word[index])
            if word[index] == ch:
            
                while stack:
                    result.append(stack.pop())
                index += 1 #after taking all the stuff from stack move to next index

                while index < len(word):
                    result.append(word[index])
                    index += 1 #adding all the rest char into result

                return ''.join(result)        
            index += 1 #move from 0 to 1

        return word
from collection import Counter

class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        st1, st2 = Counter(ransomNote), Counter(magazine)
        if st1 & st2 == st1:
            return True
        return False
    
    #Counter is a class that could calculate the times a string appear and give you a dictionary
    #{"apple": 3, "banana": 2}

class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        chars = {}
        for char in magazine:
            chars[char] = chars.get(char, 0) + 1

        for char in ransomNote:
            if char not in chars:
                return False
            chars[char] -= 1

            if chars[char] < 0:
                return False

        return True
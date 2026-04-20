class Solution:
    def checkDistances(self, s: str, distance: List[int]) -> bool:
        for i in range(len(s) - 1):
            current = s[i]
            for j in range(i + 1, len(s)):
                if current == s[j]:
                    gap = j - i - 1
                    if gap != distance[ord(current)-ord('a')]:
                        return False
        return True
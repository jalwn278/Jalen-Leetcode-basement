class Solution:
    def current(self, s):
        array = []
        for _ in s:
            if _ != '#':
                array.append(_)
            elif array:
                array.pop()
        return "".join(array)
    def backspaceCompare(self, s: str, t: str) -> bool:
        s = self.current(s)
        t = self.current(t)
        return s == t
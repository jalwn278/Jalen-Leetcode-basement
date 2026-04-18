class Solution:
    def minDeletionSize(self, strs: List[str]) -> int:
        return sum(list(col)!=sorted(col) for col in zip(*strs))
    #char** strs = ['abc', 'daf']
    #*strs = 'abc', 'daf'
    #zip *strs = ('a', 'd'), ('b', 'a')....
    #list(col) = ['b', 'a'], sorted(col) = ['a','b']
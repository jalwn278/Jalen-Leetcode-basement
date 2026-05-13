class Solution:
    def findCommonResponse(self, responses: List[List[str]]) -> str:
        times = defaultdict(int)
        responses =  [list(set(ind)) for ind in responses]
        for i in range(len(responses)):
            for j in range(len(responses[i])):
                times[responses[i][j]] += 1
                
        #the key of sorting is w and w is a tuple when(a1, a2) (b1, b2) when a1 < b1 it compare a1 b1 but when a1 == b1 it would compre a2 and b2
        return min(times.keys(), key = lambda w: (-times[w], w))
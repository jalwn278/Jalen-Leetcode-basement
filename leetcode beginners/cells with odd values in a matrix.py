class Solution:
    def oddCells(self, m: int, n: int, indices: List[List[int]]) -> int:
        rows, cols = [0]*m, [0]*n
        for r, c in indices:
            rows[r] += 1
            cols[c] += 1

        return sum((r+c) % 2 for c in cols for r in rows)
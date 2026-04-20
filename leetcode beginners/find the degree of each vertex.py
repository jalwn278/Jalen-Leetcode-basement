class Solution:
    def findDegrees(self, matrix: list[list[int]]) -> list[int]:
        array = []
        for i in range(len(matrix)):
            array.append(sum(matrix[i]))

        return array
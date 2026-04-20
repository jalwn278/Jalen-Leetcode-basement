/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDegrees(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    
    int* degree = malloc(matrixSize * sizeof(int));
    *returnSize = matrixSize;

    for (int i = 0; i < matrixSize; i++)
    {
        degree[i] = 0;
        for (int j = 0; j < matrixSize; j++)
        {
            if (j != i && matrix[i][j] == 1)
            {
                degree[i]++;
            }
        }
    }
    return degree;
}
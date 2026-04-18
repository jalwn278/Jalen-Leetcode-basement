/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* replaceElements(int* arr, int arrSize, int* returnSize) {
    *returnSize = arrSize;
    
    int* convert = malloc(arrSize * sizeof(int));
    if (convert == NULL)
    {
        return NULL;
    }

    int maxright = -1;

    for (int i = arrSize - 1; i >= 0; i--)
    {
        convert[i] = maxright;

        if (arr[i] > maxright)
        {
            maxright = arr[i];
        }
    }
    return convert;
}
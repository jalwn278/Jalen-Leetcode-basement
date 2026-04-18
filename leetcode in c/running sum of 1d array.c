/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    
    * returnSize = numsSize;

    int* res = malloc(sizeof(int) * numsSize);
    if (res == NULL)
    {
        return NULL;
    }

    res[0] = nums[0];
    for (int i = 1; i < numsSize; i++)
    {
        res[i] = res[i-1] + nums[i];
    }

    return res;
}
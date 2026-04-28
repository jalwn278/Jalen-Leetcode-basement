int removeDuplicates(int* nums, int numsSize) {
    int counts = 1;
    int index = 0;
    for (int i = 1; i < numsSize; i++)
    {
        if (nums[index] == nums[i])
        {
            continue;
        }
        else
        {
            nums[index+1] = nums[i];
            counts++;
            index++;
        }
    }
    return counts;
}
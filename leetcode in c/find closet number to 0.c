int findClosestNumber(int* nums, int numsSize) {
    for (int i = 0; i < numsSize-1; i++)
    {
        for (int j = 0; j < numsSize-1-i; j++)
        {
            if (nums[j] > nums[j+1])
            {
                int tmp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = tmp;
            }
        }
    }

    int track = 100000;
    int index = 0;
    for (int i = 0; i < numsSize; i++)
    {
        int tmp = 0;
        if (nums[i] < 0)
        {
            tmp = -nums[i];
        }
        else
        {
            tmp = nums[i];
        }

        if (tmp <= track)
        {
            track = tmp;
            index = i;
        }
    }
    return nums[index];
}

int findClosestNumber(int* nums, int numsSize) {
    int min = nums[0];
    for (int i = 1; i < numsSize; i++)
    {
        if (abs(nums[i]) < abs(min))
        {
            min = nums[i];
        }
        else if (abs(nums[i]) == abs(min))
        {
            if (nums[i] > min)
            {
                min = nums[i];
            }
        }
    }
    return min;
}
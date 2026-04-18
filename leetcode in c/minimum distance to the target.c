int getMinDistance(int* nums, int numsSize, int target, int start) {
    
    int mini = numsSize;
    int current = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == target)
        {
            current = abs(i - start);

            if (current < mini)
            {
                mini = current;
            }
        }
    }
    return mini;
}

int getMinDistance(int* nums, int numsSize, int target, int start) {

    int left = -1;
    int right = -1;
    for (int i = start; i >= 0; i--)
    {
        if (nums[i] == target)
        {
            left = start - i;
            break;
        }
    }

    for (int i = start; i < numsSize; i++)
    {
        if (nums[i] == target)
        {
            right = i - start;
            break;
        }
    }

    if (left != -1 && right != -1) return fmin(left, right);
    if (left != -1) return left;
    return right;
}
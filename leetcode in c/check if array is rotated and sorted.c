bool check(int* nums, int numsSize) {
    
    if (numsSize == 0 || numsSize ==1)
    {
        return true;
    }

    int x = 0;
    for (int i = 0; i < numsSize-1; i++)
    {
        if (nums[i] > nums[i+1])
        {
            x = i+1;
            break;
        }
    }

    if (x == 0)
    {
        return true;
    }

    int* origin = malloc(numsSize * sizeof(int));

    for (int i = 0; i < numsSize; i++)
    {
        origin[i] = nums[(i+x)%numsSize];
    }

    for (int i = 0; i < numsSize-1; i++)
    {
        if (origin[i] > origin[i+1])
        {
            free(origin);
            return false;
        }
    }
    free(origin);
    return true;
}
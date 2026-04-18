int minimumDifference(int* nums, int numsSize, int k) {
    int* sorted = malloc(numsSize * sizeof(int));

    for (int i = numsSize-1; i >= 0; i--)
    {
        int largest = nums[0];
        int index = 0;
        for (int j = 0; j <= i; j++)
        {
            if (nums[j] > largest)
            {
                largest = nums[j];
                index = j;
            }
        }
        sorted[i] = largest;

        int tmp = nums[index];
        nums[index] = nums[i];
        nums[i] = tmp;
    }

    if (k == 1)
    {
        return 0;
    }


    int cell = sorted[numsSize-1];
    for (int i = 0; i < numsSize - k + 1; i++)
    {
        int m = sorted[i+k-1] - sorted[i];
        if (m < cell)
        {
            cell = m;
        }
    }
    return cell;
    
    
    
}
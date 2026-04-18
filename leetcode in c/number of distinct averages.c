int distinctAverages(int* nums, int numsSize) {
    
    for (int i = 0; i < numsSize-1; i++)
    {  
        //start from the new begining
        int mini = nums[i]; 
        int index = i;
        for (int j = i+1; j < numsSize; j++)
        if (nums[j] < mini)
        {
            mini = nums[j];
            index = j;
        }
        int tmp = nums[i];
        nums[i] = nums[index];
        nums[index] = tmp;
    }

    float* arr = malloc(sizeof(float) * numsSize / 2);
    for (int i = 0; i < numsSize / 2; i++)
    {
        int total = nums[i] + nums[numsSize-1-i];
        arr[i] = (float)total / 2.0; 
    }
    
    // for arr[i] check it's left and set check = true
    int count = 0;
    for (int i = 0; i < numsSize / 2; i++)
    {
        bool check = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                check = true;
                break;
            }
        }

        if (!check)
        {
            count++;
        }
    }

    return count;
}
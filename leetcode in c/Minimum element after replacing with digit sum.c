int minElement(int* nums, int numsSize) {
    int min = 36;

    for (int i = 0; i < numsSize; i++)
    {
        int count = 0;
        int tmp = nums[i];

        while (tmp > 0)
        {
            count += tmp % 10;
            tmp = tmp / 10;
        }
        min = fmin(count, min);
    }
    return min;
}
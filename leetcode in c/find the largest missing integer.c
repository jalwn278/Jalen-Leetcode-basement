int largestInteger(int* nums, int numsSize, int k) {
    int first = 0, last = 0;

        if (k == 1) {
            int freq[51] = {0}, num = -1;
            for (int i = 0; i < numsSize; i++) 
            {
                freq[nums[i]]++;
            }

            for (int i = 0; i <= 50; i++) 
            {
                # in above we let freq[nums[i]]++ so in freq[i] == 1 ,freq is the number in nums[] 
                if (freq[i] == 1)
                    num = fmax(num, i);
            }
            return num;
        }

        # when k == numsSize, we just need to find the biggest number
        if (k == numsSize) 
        {
            int num = -1;
            for (int i = 0; i < numsSize; i++) {
                num = fmax(num, nums[i]);
            }

            return num;
        }

        # when k is a random number it is impossible that the number in middle of the nums array appear only once, so we just need to check about the first and the last one, IF somes number in the middle of the nums equal to them it is not an exactly once number
        for (int i = 0; i < numsSize; i++) 
        {
            if (nums[i] == nums[0])
                first++;
            if (nums[i] == nums[numsSize - 1])
                last++;
        }

        if (first == 1 && last == 1)
            return fmax(nums[0], nums[numsSize - 1]);
        else if (first == 1)
            return nums[0];
        else if (last == 1)
            return nums[numsSize - 1];
        else
            return -1;
}
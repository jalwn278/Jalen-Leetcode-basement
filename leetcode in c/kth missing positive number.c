int findKthPositive(int* arr, int arrSize, int k) {
    bool judge[2001] = {};
    for (int i = 0; i < arrSize; i++)
    {
        judge[arr[i]] = true;
    }
    
    int count = 0;
    int* num = malloc(k * sizeof(int));
    for (int j = 1; j <= 2000; j++)
    {
        if (count < k)
        {
            if (!judge[j])
            {
                num[count] = j;
                count++;
            }
        }
        else
        {
            break;
        }
    }

    return num[k-1];
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
typedef struct _data{
    int value;
    int reversed;
}Data;

int cmp(const void* a,  const void* b) //const coid* is common pointer
{
    Data* tmpA = (Data *)a; // made a become a Data* data type
    Data* tmpB = (Data *)b;

    if(tmpA->reversed==tmpB->reversed)
    {
        return tmpA->value -tmpB->value;
    }
    return tmpA->reversed-tmpB->reversed;
}

int reverseNum(int x )
{
    int ans = 0;
    while(x)
    {
        ans = ans<<1; // if ans == 001 001<<1 == 010
        if(x&1) //if x and 1 both 1 it input x&1 == 1 else x&1 == 0. 101%110 == 100. 101^110 == 011. 101|110 == 111. ~101 == 010
        {
            ans+=1;
        }
        x=x>>1; //if x == 010 010>>1 == 001
    }
    return ans;
}

int* sortByReflection(int* nums, int numsSize, int* returnSize) {
    Data* table = malloc(sizeof(Data)*numsSize);
    for(int i =0;i<numsSize;i++)
    {
        table[i].value = nums[i];
        table[i].reversed = reverseNum(nums[i]); //what I input is 6, in pc is 110
    }
    qsort(table, numsSize, sizeof(Data), cmp);

    for(int i =0;i<numsSize;i++)
    {
        nums[i]=table[i].value;
    }
    free(table);
    *returnSize=numsSize;
    return nums;


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 typedef struct data
 {
    int value;
    int reversed;
 }Data;

int reverse(int x)
{
    int ans = 0;
    while (x)
    {
        ans = ans << 1;
        if (x & 1)
        {
            ans+=1;
        }
        x = x >> 1;
    }
    return ans;
}

int compare (Data a, Data b)
{
    if (a.reversed > b.reversed)
    {
        return 1;
    }
    if (a.reversed == b.reversed && a.value > b.value)
    {
        return 1;
    }
    return 0;
}

int* sortByReflection(int* nums, int numsSize, int* returnSize) {
    Data* table = malloc(sizeof(Data) * numsSize);
    for (int i = 0; i < numsSize; i++)
    {
        table[i].value = nums[i];
        table[i].reversed = reverse(nums[i]);
    }
    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = 0; j < numsSize - 1 - i; j++)
        {
            if (compare(table[j], table[j+1]))
            {
                Data temp = table[j];
                table[j] = table[j+1];
                table[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < numsSize; i++)
    {
        nums[i] = table[i].value;
    }
    *returnSize = numsSize;
    return nums;
}

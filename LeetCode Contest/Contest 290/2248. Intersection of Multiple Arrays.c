int* intersection(int** nums, int numsSize, int* numsColSize, int* returnSize)
{
    int hash[1001] = {0};
    int *res = malloc(sizeof(int) * 1001);
    for (int i = 0; i < numsSize; i++)
        for (int j = 0; j < numsColSize[i]; j++)
            hash[nums[i][j]]++;
    int j = 0;
    for (int i = 0; i < 1001; i++) 
    {
        if (hash[i] == numsSize) 
        {
            res[j] = i;
            j++;
        }
    }
    *returnSize = j;
    return res;
}

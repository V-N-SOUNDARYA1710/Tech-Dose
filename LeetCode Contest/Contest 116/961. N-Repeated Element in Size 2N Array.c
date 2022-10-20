int repeatedNTimes(int* nums, int numsSize)
{
    int hash_table[10000] = {0};
    for (int i = 0; i < numsSize; i++) 
    {
        hash_table[nums[i]]++;
        if (hash_table[nums[i]] > 1)
            return nums[i];
    }
    return 0;
}

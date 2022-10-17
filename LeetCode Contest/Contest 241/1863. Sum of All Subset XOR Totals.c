int subsetXORSum(int* nums, int numsSize)
{
    int i, j, XOR, sum = 0;
    for(i = 0; i < (1 << numsSize); i++)
    {
        XOR = 0;
        for(j = 0; j < numsSize; j++)
        {
            if((i & (1 << j)) != 0)
            {
                XOR ^= nums[j];
            }
        }
        sum += XOR;
    }
    
    return sum;
}

bool* prefixesDivBy5(int* nums, int numsSize, int* returnSize)
{
    int i, sum = 0;
    bool *output = malloc(numsSize * sizeof(bool));
    *returnSize = numsSize;
    for(i = 0; i < numsSize; i++)
    {
        sum = (sum * 2) % 5;
        sum += nums[i];
        if(sum % 5 == 0){
            output[i] = 1;
        }
        else
            output[i] = 0;
    }
    
    return output;
}

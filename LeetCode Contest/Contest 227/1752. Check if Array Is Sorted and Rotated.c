bool check(int* nums, int numsSize)
{
    int i;
    int flag = 1;
    for(i=0; i < numsSize; i++)
    {
        if(nums[i] <= nums[(i+1)%numsSize])
        {
            continue;
        }
        else
        {
            flag--;
        }
    }
    if(flag < 0)
        return 0;
    else
        return 1;
}

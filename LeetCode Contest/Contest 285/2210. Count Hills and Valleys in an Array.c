int countHillValley(int* nums, int numsSize){
    int prev=0,result=0;
    for(int i=1;i<numsSize-1;i++)
    {
        if(nums[prev]==nums[i] || nums[i+1]==nums[i])
        {
            continue;
        }
        unsigned int mask=(unsigned int)0x1 << (sizeof(int)<<3)-1;
        if((nums[prev]-nums[i] & mask)==(nums[i+1]-nums[i]&mask))
        {
            result++;
        }
        prev=i;
    }
    return result;
}

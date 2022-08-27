int singleNumber(int* nums, int numsSize){
    if(numsSize==0)
        return nums[0];
    int ctr=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        ctr^=nums[i];
    }
    return ctr;
}

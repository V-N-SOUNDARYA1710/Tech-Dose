int singleNumber(int* nums, int numsSize){
    int fir=0;
    int sec=0;
    for(int i=0;i<numsSize;i++)
    {
        fir=fir^nums[i] & ~sec;
        sec=sec^nums[i] & ~fir;
    }
    return fir;
}

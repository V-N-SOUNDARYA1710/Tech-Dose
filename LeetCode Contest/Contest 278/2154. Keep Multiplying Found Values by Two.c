int findFinalValue(int* nums, int numsSize, int original){
    int index=0;
    while(index<numsSize)
    {
        if(nums[index]==original)
        {
            original*=2;
            index=0;
            continue;
        }
        index++;
    }
    return original;
}

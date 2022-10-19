int* sortArrayByParityII(int* nums, int numsSize, int* returnSize)
{
    int i=0,j=1;
    int temp=0;
    for(int i=0;i<numsSize;i+=2)
    {
        if(nums[i]%2==1)
        {
            while(nums[j]%2==1)
            {
                j=j+2;
            }
            temp=nums[j];
            nums[j]=nums[i];
            nums[i]=temp;
        }
    }
    *returnSize=numsSize;
    return nums;
}

int maxAscendingSum(int* nums, int numsSize)
{
    int i,j,max=0,sum;
    for(i=0;i<numsSize;i=j){
        sum=nums[i];
        for(j=i+1;j<numsSize;j++){
            if(nums[j]<=nums[j-1])
                break;
            sum+=nums[j];
        }
        if(sum>max)
            max=sum;
    }
    return max;
}

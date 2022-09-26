int cmp(int *a,int *b)
{
    return *b-*a;
}
int findKthLargest(int* nums, int numsSize, int k){
    qsort(nums,numsSize,sizeof(int),cmp);
    return nums[k-1];

}

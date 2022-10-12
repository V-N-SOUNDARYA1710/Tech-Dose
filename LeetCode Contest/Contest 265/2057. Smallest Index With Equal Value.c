/*
Input: nums = [0,1,2]
Output: 0
Explanation: 
i=0: 0 mod 10 = 0 == nums[0].
i=1: 1 mod 10 = 1 == nums[1].
i=2: 2 mod 10 = 2 == nums[2].
All indices have i mod 10 == nums[i], so we return the smallest index 0.
*/
int smallestEqual(int* nums, int numsSize)
{
    int min=INT_MAX;
    for(int i=0;i<numsSize;i++)
    {
        if(i%10==nums[i])
        {
            min=i<min?i:min;
        }
    }
    return min==INT_MAX?-1:min;
}

int countElements(int* nums, int numsSize){
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    int cnt = 0;
    for (int i = 0; i < numsSize; i++) 
    {
        if (nums[i] < minVal) 
        {
            minVal = nums[i];
        }
        if (nums[i] > maxVal) 
        {
            maxVal = nums[i];
        }
    }
    for (int i = 0; i < numsSize; i++) 
    {
        if (minVal < nums[i] && nums[i] < maxVal) 
        {
            cnt++;
        }
    }
    
    return cnt;
}

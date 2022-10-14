class Solution {
    public int mostFrequentEven(int[] nums) {
        int frequent[]=new int[1000000];
        int max_freq=-1,max=-1;
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]%2==0)
            {
                frequent[nums[i]/2]++;
                if(frequent[nums[i]/2]>max_freq)
                {
                    max_freq=frequent[nums[i]/2];
                    max=nums[i];
                }
                else if(frequent[nums[i]/2]==max_freq)
                {
                    max=(max<nums[i])?max:nums[i];
                }
            }
        }
        return max;
    }
}

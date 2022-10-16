class Solution {
    public int findMaxK(int[] nums) {
        List<Integer> l =new ArrayList<>();
        for(int i:nums)
            l.add(i);
        Arrays.sort(nums);
        for(int i=nums.length-1;i>=0;i--)
        {
            if(l.indexOf(-nums[i])!=-1)
            {
                return nums[i];
            }
        }
        return -1;
    }
}

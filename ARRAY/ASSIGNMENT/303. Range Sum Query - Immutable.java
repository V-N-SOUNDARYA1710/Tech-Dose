class NumArray {
    private int nums[];
    public NumArray(int[] nums) {
        for(int i=1;i<nums.length;i++){ //Prefix Sum Algorithm
            nums[i]+=nums[i-1];
        }
        this.nums=nums;
    }
    
    public int sumRange(int left, int right) {
        return (left==0)?nums[right]:nums[right]-nums[left-1];
    }
}

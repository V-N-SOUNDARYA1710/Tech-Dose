class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        List<List<Integer>> res=new ArrayList<List<Integer>>();
        Set<List<Integer>> s=new HashSet<List<Integer>>();
        Arrays.sort(nums);
        for(int i=0;i<nums.length-3;i++){
            if((i>0 && nums[i]!=nums[i-1])||i==0){
                for(int j=i+1;j<nums.length-2;j++){           
                    if((j>i+1 && nums[j]!=nums[j-1])||j==i+1){
                        long sum=nums[i]+nums[j];
                        int low=j+1,high=nums.length-1;
                        while(low<high){
                            if(nums[low]+nums[high]+sum==target){
                                List<Integer> l=new ArrayList<Integer>();
                                l.add(nums[i]);
                                l.add(nums[j]);
                                l.add(nums[low]);
                                l.add(nums[high]);
                                s.add(l); 
                                low++;
                            }
                            else if(nums[low]+nums[high]+sum>target){
                                high--;
                            }
                            else{
                                low++;
                            }
                        }
                    }
                }
            }
        }
        for(List<Integer> l:s){
            res.add(l);
        }
        return res;
    }
}

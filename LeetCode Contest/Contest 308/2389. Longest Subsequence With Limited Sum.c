class Solution {
    public int[] answerQueries(int[] nums, int[] queries) {
        Arrays.sort(nums);
        int ind=0;
        int mat[]=new int[queries.length];
        for(int q:queries)
        {
            int sum=0,count=0;
            for(int i=0;i<nums.length;i++)
            {
                if(nums[i]+sum<=q)
                {
                    sum=sum+nums[i];
                    count++;
                    mat[ind]=count;
                }
                if(i==nums.length-1)
                {
                    ind++;
                }    
            }
        }
        return mat;
    }
}

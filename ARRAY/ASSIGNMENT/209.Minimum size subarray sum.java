class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        long sum=0,c=Integer.MAX_VALUE;
        Deque<long[]> d=new ArrayDeque<long[]>();
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
            if(sum>=target){
                c=Math.min(c,i+1);
            }
            long a[]=new long[]{Integer.MIN_VALUE,Integer.MIN_VALUE};
            while(d.size()!=0 && (sum-d.peekFirst()[0])>=target){
                a=d.pollFirst();
            }
            if(a[1]!=Integer.MIN_VALUE){
                c=Math.min(c,i-a[1]);
            }
            long [] val = new long[2];
            val[0]=sum;
            val[1]=i;
            d.add(val);
        }
        return (c==Integer.MAX_VALUE)?0:(int)c;
    }
}

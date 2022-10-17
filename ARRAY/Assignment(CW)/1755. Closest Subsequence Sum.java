class Solution {
    public void sumSubSequence(ArrayList<Integer> l,int[] part,int sum,int si){
        if(si==part.length){
            l.add(sum);
            return;
        }
        sumSubSequence(l,part,sum+part[si],si+1);
        sumSubSequence(l,part,sum,si+1);
    }
    public int minAbsDifference(int[] nums, int goal) {
        int part1[]=new int[nums.length/2];
        int part2[]=new int[nums.length-part1.length];
        for(int i=0;i<part1.length;i++){
            part1[i]=nums[i];
        }
        int ind=part1.length;
        for(int i=0;i<part2.length;i++){
            part2[i]=nums[ind++];
        }
        ArrayList<Integer> l1=new ArrayList<>();
        ArrayList<Integer> l2=new ArrayList<>();
        sumSubSequence(l1,part1,0,0);
        sumSubSequence(l2,part2,0,0);
        Collections.sort(l1);
        Collections.sort(l2);
        int low=0;
        int high=l2.size()-1;
        int abs=Math.abs(l1.get(low)+l2.get(high)-goal);
        while(low<l1.size() && high>=0){
            int sum=l1.get(low)+l2.get(high);
            abs=Math.min(abs,Math.abs(sum-goal));
            if(sum==goal){
                return 0;
            }else if(sum<goal){
                low++;
            }else{
                high--;
            }
        }
        return abs;
    }
}

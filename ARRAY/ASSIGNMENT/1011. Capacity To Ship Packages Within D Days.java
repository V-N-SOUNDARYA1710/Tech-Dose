class Solution {
    public int shipWithinDays(int[] weights, int days) {
        int low=0;
        int high=0;
        for(int w:weights){
            low=Math.max(w,low);
            high+=w;
        }
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            int reqDays=requiredDays(weights,mid);
            if(reqDays<=days){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int requiredDays(int[] weights,int capacity){
        int currWeight=0;
        int days=1;
        for(int i=0;i<weights.length;i++){
            if(currWeight+weights[i]<=capacity){
                currWeight+=weights[i];
            }
            else{
                currWeight=weights[i];
                days++;
            }
        }
        return days;
    }
}

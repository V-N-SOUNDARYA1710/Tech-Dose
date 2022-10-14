class Solution {
    public int hardestWorker(int n, int[][] logs) {
        int w[]=new int[logs.length];
        int index=0;
        w[0]=logs[0][1];
        int max=w[0];
        for(int i=1;i<logs.length;i++)
        {
            w[i]=logs[i][1]-logs[i-1][1];
            if(w[i]>max)
            {
                max=w[i];
                index=i;
            }
            else if(w[i]==max)
            {
                index=(logs[index][0]<logs[i][0])?index:i;
            }
        }
        return logs[index][0]; 
    }
}

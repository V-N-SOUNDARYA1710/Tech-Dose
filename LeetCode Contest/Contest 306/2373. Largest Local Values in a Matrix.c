class Solution {
    public int findMax(int[][] grid,int iVal,int jVal){
        int maximum=0;
        for(int i=iVal;i<iVal+3;i++){
            for(int j=jVal;j<jVal+3;j++){
                if(maximum<grid[i][j]){
                    maximum=grid[i][j];
                }
            }
        }
        return maximum;
    }
    public int[][] largestLocal(int[][] grid) {
        int r=grid.length,res[][]=new int[r-2][r-2];
        int xVal=0,yVal=0;
        for(int i=0;i<r-2;i++){
            for(int j=0;j<r-2;j++){
                int max=findMax(grid,i,j);
                res[xVal][yVal++]=max;
            }
            xVal++;
            yVal=0;
        }
        return res;
    }
}

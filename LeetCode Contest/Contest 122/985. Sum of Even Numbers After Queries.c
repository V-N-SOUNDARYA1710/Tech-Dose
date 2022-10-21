class Solution {
    public int[] sumEvenAfterQueries(int[] A, int[][] queries) {
        int[] output_arr=new int[queries.length];
        int even_sum=0;
        for(int val:A)
        {
            if(val%2==0)
            {
                even_sum+=val;
            }
        }
        for(int i=0;i<queries.length;i++)
        {
            int index=queries[i][1];
            int value=queries[i][0];
            if(A[index]%2==0)
            {
                even_sum-=A[index];
            }
            A[index]+=value;
            if(A[index]%2==0)
            {
                even_sum+=A[index];
            }
            output_arr[i]=even_sum;
        }
        return output_arr;
    }
}

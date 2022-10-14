class Solution {
    public void sort(String[] names, int[] heights,int low,int high) {
        if(low>=high)
        {
            return;
        }
        int pivot=high,i=low-1;
        for(int j=low;j<=high;j++)
        {
            if(heights[j]>=heights[pivot])
            {
                i++;
                if(i!=j)
                {
                    int temp=heights[j];
                    heights[j]=heights[i];
                    heights[i]=temp;
                    String str=names[j];
                    names[j]=names[i];
                    names[i]=str;
                }
            }
        }
        sort(names,heights,low,i-1);
        sort(names,heights,i+1,high);
    }
    public String[] sortPeople(String[] names,int[] heights)
    {
        sort(names,heights,0,heights.length-1);
        return names;
    }
}

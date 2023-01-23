import java.util.*;

public class Main
{
    static int seg_tree[];
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int nums[] = {6,8,4};
		int n = 3;
		seg_tree = new int[4*n+1];
		build_seg(nums,0,n-1,1);
		for(int i=0;i<seg_tree.length;i++)
		{
		    System.out.print(seg_tree[i]+" ");
		}
		System.out.println();
		System.out.println(rangeSum(nums,0,2,0,n-1,1));
		nums[1] = 2;
		update(nums,0,2,0,n-1,1);
		for(int i=0;i<seg_tree.length;i++)
		{
		    System.out.print(seg_tree[i]+" ");
		}
		System.out.println();
		System.out.println(rangeSum(nums,0,2,0,n-1,1));
	}
	public static void build_seg(int[] nums,int start,int end,int index)
	{
	    if(start > end)
	    {
	        return;
	    }
	    if(start == end)
	    {
	        seg_tree[index] = nums[start];
	        return;
	    }
	    
	    int mid = start + (end - start)/2;
	    build_seg(nums,start,mid,index*2);
	    build_seg(nums,mid+1,end,index*2+1);
	    seg_tree[index] = LCM(seg_tree[index*2],seg_tree[index*2+1]);
	}
	public static int rangeSum(int nums[],int qs,int qe,int s,int e,int index)
	{
	    if(qs > e || qe < s)
	    {
	        return 0;
	    }
	    if(s >= qs && e <= qe)
	    {
	        return seg_tree[index];
	    }
	    int mid = s + (e - s)/2;
	    int l = rangeSum(nums,qs,qe,s,mid,index*2);
	    int r = rangeSum(nums,qs,qe,mid+1,e,index*2+1);
	    return LCM(l,r);
	}
	public static void update(int[] nums,int to_index,int to_value,int start,int end,int index_seg)
	{
	    if(start > to_index || end < to_index)
	    {
	        return;
	    }
	    if(start == end)
	    {
	        seg_tree[index_seg] = to_value;
	        return;
	    }
	    int mid = start + (end-start)/2;
	    update(nums,to_index,to_value,start,mid,index_seg*2);
	    update(nums,to_index,to_value,mid+1,end,index_seg*2+1);
	    seg_tree[index_seg] = LCM(seg_tree[index_seg*2],seg_tree[index_seg*2+1]);
	}
	public static int GCD(int a,int b)
	{
	    if(a==0)
	    {
	        return b;
	    }
	    return GCD(b%a,a);
	}
	public static int LCM(int a,int b)
	{
	    return (a*b)/GCD(a,b);
	}
}

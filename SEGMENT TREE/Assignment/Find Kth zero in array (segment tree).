import java.util.*;
public class Main
{
    static int seg_tree[];
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a[] = {0,0,0,2,6};
		seg_tree = new int[a.length*4];
		build_tree(a,0,a.length-1,1);
		System.out.println(query(a,0,a.length-1,3,1));
	}
	public static void build_tree(int a[],int s,int e,int index)
	{
	    if(s > e)
	    {
	        return;
	    }
	    if(s == e)
	    {
	        seg_tree[index] = (a[s]==0)?1:0;
	        return;
	    }
	    int mid = s + (e-s)/2;
	    build_tree(a,s,mid,index*2);
	    build_tree(a,mid+1,e,index*2+1);
	    seg_tree[index] = seg_tree[index*2]+seg_tree[index*2+1];
	}
	public static int query(int[] a,int s,int e,int k,int index)
	{
	    if(k>seg_tree[index])
	    {
	        return -1;
	    }
	    if(s == e)
	    {
	        return s;
	    }
	    int mid = s + (e-s)/2;
	    if(k<=seg_tree[index*2])
	    {
	        return query(a,s,mid,k,index*2);
	    }
	    else
	    {
	        return query(a,mid+1,e,k-seg_tree[index*2],index*2+1);
	    }
	}
}

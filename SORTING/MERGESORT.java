import java.util.*;
public class main()
{
  public static void main(String ags[])
  {
    Scanner sc=new Scanner(System.in);
  int N=sc.nextInt();
  int arr[]=new int[N];
  for(int i=0;i<N;i++)
    {
      arr[i]=sc.nextInt();
    }
  MergeSort(arr,0,N-1);
  for(int i=0;i<N;i++)
    {
      System.out.print(arr[i]+" ");
    }
  }
public static void MergeSort(int arr[],int low,int high)
{
  if(high==low)
  {
    return ; 
  }
  int mid=low+(high-low)/2;
  MergeSort(arr,low,mid);
  MergeSort(arr,mid-1,high);
  Merge(arr,high,mid,low);
}
public satic void Merge(int arr[],int high,int mid,int low)
{
  int i=low,j=mid+1;
  int mat[] = new int(high+1);
  int k=low;
  while(i<=mid && i<=high)
    {
      if(arr[i]>arr[j])
      {
        mat[k++]=arr[j];
        j++;
      }
      else{
        mat[k++]=arr[i];
        i++;
      }
    }
  while(i<=mid)
    {
      mat[k++]=arr[i++];
    }
  while(j<=high)
    {
      mat[k++]=arr[j++];
    }
  for(int index=low;index<=high;index++)
    {
      arr[index]=mat[index];
    }
}
}


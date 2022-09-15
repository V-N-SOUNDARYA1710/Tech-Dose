#include <stdio.h>
void swap(int *a,int *b)
{
  int t=*a;
  *a=*b;
  *b=t;
}
int quicksort(int arr[],int low,int high)
{
  if(low==high){
      return;
    }
  int pivot=arr[high],i=low-1,flag=0;
  for(int j=low;j<=high;j++)
    {
      if(arr[j]<=pivot)
      {
        i++;
        swap(&arr[i],&arr[j]);
        flag=1;
      }
    }
  if(flag==1)
  {
    quicksort(arr,low,i-1);
    quicksort(arr,i+1,high);
  }
}
int main(void) {
  int N,low,high;
  scanf("%d",&N);
  int arr[N];
  for(int i=0;i<N;i++)
    {
      scanf("%d",&arr[i]);
    }
  quicksort(arr,0,N-1);
  for(int i=0;i<N;i++)
    {
      printf("%d ",arr[i]);
    }
  return 0;
}

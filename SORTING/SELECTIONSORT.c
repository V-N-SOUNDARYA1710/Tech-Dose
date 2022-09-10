#include<stdio.h>
int main()
{
  int N;
  scanf("%d",&N);
  int arr[N];
  for(int i=0;i<N;i++)
    {
      scanf("%d",&arr[i]);
    }
  for(int i=0;i<N-1;i++)
    {
      int ind=i;
      for(int j=i+1;j<N;j++)
        {
          if(arr[ind]>arr[j])
          {
            ind=j;
          }
        }
      int temp=arr[ind];
      arr[ind]=arr[i];
      arr[i]=temp;
    }
  for(int i=0;i<N;i++)
    {
      printf("%d ",arr[i]);
    }
}

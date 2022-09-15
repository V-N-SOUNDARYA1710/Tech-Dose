#include <stdio.h>
void count_sort(int arr[],int N)
{
  int output[100];
  int max=arr[0];
  for(int i=0;i<N;i++)
    {
      if(arr[i]>max)
      {
        max=arr[i];      
        }
    }
  int count[100];
  for(int i=0;i<=max;i++)
    {
      count[i]=0;
    }
  for(int i=0;i<N;i++)
    {
      count[arr[i]]++;
    }
  for(int i=1;i<=max;i++)
    {
      count[i]=count[i]+count[i-1];
    }
  for(int i=N-1;i>=0;i--)
    {
      output[count[arr[i]]-1]=arr[i];
      count[arr[i]]--;
    }
  for(int i=0;i<N;i++)
    {
      arr[i]=output[i];
    }
}
int main(void) {
  int N;
  scanf("%d",&N);
  int arr[N];
  for(int i=0;i<N;i++)
    {
      scanf("%d",&arr[i]);
    }
  count_sort(arr,N);
  for(int i=0;i<N;i++)
    {
      printf("%d ",arr[i]);
    }
  return 0;
}

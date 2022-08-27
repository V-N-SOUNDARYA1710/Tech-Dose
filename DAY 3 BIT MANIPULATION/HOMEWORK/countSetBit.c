#include<stdio.h>
int countSetBit(int N)
{
  int ctr=0;
  for(int i=1;i<N;i++)
  {
    if(N&i)
    {
      ctr++;
    }
  }
  return ctr;
}
int main()
{
  int N;
  scanf("%d",&N);
  printf("%d",countSetBit(N));
  return 0;
}

#include<stdio.h>
int main()
{
  int N;
  scanf("%d",&N);
  for(int i=1;i<=N;i++)
  {
    for(int j=N;j>=i;j--)
    {
      printf("%d ",j);
    }
    printf("\n");
  }
  return 0;
}
/*
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5*/

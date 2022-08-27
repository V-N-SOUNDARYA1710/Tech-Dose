#include<stdio.h>
int Compliment1(int N)
{
  return ~N;
}
int Compliment2(int N)
{
  return ~N+1;
}
int main()
{
  int N;
  scanf("%d",&N);
  printf("%d",Compliment1(N));
  printf("%d",Compliment2(N));
  return 0;
}

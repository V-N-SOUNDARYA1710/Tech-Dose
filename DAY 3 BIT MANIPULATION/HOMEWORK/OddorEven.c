#include<stdio.h>
int OddOrEven(int N)
{
  return (N&1)==0;
}
int main()
{
  int N;
  scanf("%d",&N);
  printf("%d",OddOrEven(N)==true ?"Even" : "Odd");
  return 0;
}

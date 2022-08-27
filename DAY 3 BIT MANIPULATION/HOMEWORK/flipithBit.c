#include<stdio.H>
int flipBit(int N)
{
  return N^(1<<(pos-1));
}
int main()
{
  int N,pos;
  scanf("%d%d",&N,&pos);
  printf("%d",flipBit(N));
  return 0;
}

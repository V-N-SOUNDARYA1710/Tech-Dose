#include<stdio.H>
int flipBit(int N,int pos)
{
  return N^(1<<(pos-1));
}
int main()
{
  int N,pos;
  scanf("%d%d",&N,&pos);
  printf("%d",flipBit(N,pos));
  return 0;
}

#include<stdio.h>
int unsetIthBit(int N,int pos)
{
  return N & (~(1<<(pos-1)));
}
int main()
{
  int N,pos;
  scanf("%d%d",&N,&pos);
  printf("%d",unsetIthBit(N,pos));
  return 0;
}

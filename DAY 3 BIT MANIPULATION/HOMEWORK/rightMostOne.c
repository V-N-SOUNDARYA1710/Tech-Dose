#include<stdio.h>
int rightMostOne(int N)
{
  return N & (~N+1);
}
int rightMostOnePosition(int N)
{
   int pos = 0;
    while( (N&1) ==0 ){
        N >>= 1;
        pos++;
    }
    return pos+1;
}
int main()
{
  int N;
  scanf("%d",&N);
  printf("%d",rightMostOne(N));
  printf("%d",rightMostOnePosition(N));
  return 0;
}

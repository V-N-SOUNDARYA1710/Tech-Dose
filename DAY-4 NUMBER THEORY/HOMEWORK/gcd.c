#include<stdio.h>
int gcd(int a,int b)
{
  if(b==0)
  {
    return a;
  }
  else
  {
    return gcd(a%b,b);
  }
}
int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  printf("%d",gcd(a,b));
}

#include <bits/stdc++.h>
using namespace std;
bool isPrime1(int val)
{
  for(int i=2;i<val;i++)
  {
    if(val%i==0)
    {
      return false;
    }
  }
  return true;
}
bool isPrime2(int val)
{
  for(int i=2;i*i<=val;i++)
  {
    if(val%i==0)
    {
      return false;
    }
  }
  return true;
}
int main()
{
  int N;
  cin>>N;
  cout<<(isPrime1(N)?"Prime":"Not Prime")<<endl;
  cout<<(isPrime2(N)?"Prime":"Not Prime")<<endl;
}

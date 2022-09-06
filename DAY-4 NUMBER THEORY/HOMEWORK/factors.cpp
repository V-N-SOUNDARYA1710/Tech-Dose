#include <bits/stdc++.h>
using namespace std;
vector<int> getFactors1(int val)
{
  vector<int> factors;
  for(int i=1;i<=val;i++)
  {
    if(val%i==0)
    {
      factors.push_back(i);
    }
  }
  return factors;
}
vector<int> getFactors2(int val)
{
  vector<int> factors;
  for(int i=0;i<=val;i++)
  {
    if(val%i==0)
    {
      factors.push_back(i);
      if(val/i !=i)
      {
        factors.push_bacK(val/i);
      }
    }
  }
  return factors;
}
int main()
{
  int N;
  cin>>N;
  for(int i:getFactors1(N))
  {
    cout<<i<<" ";
  }
  cout<<endl;
  for(int i:getFactors2(N))
  {
    cout<<i<<" ";
  }
}


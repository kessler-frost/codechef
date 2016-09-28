#include<iostream>
using namespace std;
int main()
{
  unsigned long int n,k,t;
  int p=0;
  cin>>n>>k;
  while(n)
  {
    cin>>t;
    if(t%k==0)
    {
      p++;
    }
    n--;
  }
  cout<<p;
  return 0;
}

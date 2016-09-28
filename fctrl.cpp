#include<iostream>
using namespace std;
int main()
{
  unsigned long int t,n,z;
  cin>>t;
  while(t)
  {
    z=0;
    cin>>n;
    while(n)
    {
      n=n/5;
      z+=n;
    }
    cout<<z<<endl;
    t--;
  }
  return 0;
}

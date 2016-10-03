#include<iostream>
using namespace std;
int main()
{
  unsigned long int n,a[100000],i,x;
  cin>>n;
  while(n)
  {
    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
      if(a[a[i]-1]!=i+1)
      {
        x=0;
        break;
      }
      else
      {
        x=1;
      }
    }
    if(x==1) cout<<"ambiguous\n";
    else cout<<"not ambiguous\n";
    cin>>n;
  }
  return 0;
}

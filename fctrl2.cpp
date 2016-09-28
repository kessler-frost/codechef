#include<iostream>
using namespace std;
int main()
{
  int t,a[200],x,r,m,i,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    a[0]=1;
    m=1;
    r=0;
    while(n>=1)
    {
      i=0;
      while(m>i)
      {
        x=a[i]*n+r;
        a[i]=x%10;
        r=x/10;
        i++;
      }
      while(r!=0)
      {
        a[m]=r%10;
        r=r/10;
        m++;
      }
      n--;
    }
    while(m--)
    {
      cout<<a[m];
    }
    cout<<endl;
  }
  return 0;
}

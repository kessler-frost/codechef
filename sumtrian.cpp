#include<iostream>
using namespace std;
int main()
{
  int t,a[200][200],m,i,j,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    for(i=0;i<n;i++)
    {
      for(j=0;j<=i;j++)
      {
        cin>>a[i][j];
      }
    }
    for(i=1;i<n;i++)
    {
      for(j=0;j<=i;j++)
      {
        if(j==0)
        {
          a[i][j]+=a[i-1][j];
        }
        else
        {
          a[i][j]+=max(a[i-1][j],a[i-1][j-1]);
        }
      }
    }
    m=a[n-1][0];
    for(j=1;j<n;j++)
    {
      if(a[n-1][j]>m)
      {
        m=a[n-1][j];
      }
    }
    cout<<m<<endl;
  }
  return 0;
}

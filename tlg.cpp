#include<iostream>
using namespace std;
int main()
{
  unsigned int n;
  int l,w,s[10000],t[10000],sum1=0,sum2=0,max=0;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>s[i]>>t[i];
    sum1+=s[i]; sum2+=t[i];
    l=sum1-sum2;
    if(l>0&&l>max)
    {
      max=l; w=1;
    }
    else if(l<0&&l*(-1)>max)
    {
      max=l*(-1); w=2;
    }
  }
  cout<<w<<" "<<max;
  return 0;
}

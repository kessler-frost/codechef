#include<iostream>
#include<math.h>
using namespace std;
int menu(unsigned long int p,int i)
{
  int m=0;
  unsigned long int r,x,q;
  while(p>=pow(2,11)||(p<pow(2,i)&&(i--)))
  {
    if(p>=pow(2,i))
    {
      m++;
      x=pow(2,i);
      r=p%x;
      if(r==0)
      {
        return p/x;
      }
      else
      {
        m+=menu(p-x,i);
        return m;
      }
    }
  }
}
int main()
{
  int t;
  unsigned long int p;
  cin>>t;
  while(t--)
  {
    cin>>p;
    cout<<menu(p,11)<<endl;
  }
  return 0;
}

#include<iostream>
unsigned long int S=1000000;
using namespace std;
void merge(unsigned long int a[],unsigned long int l,unsigned long int m,unsigned long int r)
{
  unsigned long int i,j,k;
  unsigned long int n1=m-l+1;
  unsigned long int n2=r-m;
  unsigned long int L[n1],R[n2];
  for(i=0;i<n1;i++)
    {L[i]=a[l+i];}
  for(j=0;j<n2;j++)
    {R[j]=a[m+1+j];}
  i=0;
  j=0;
  k=l;
  while(i<n1&&j<n2)
  {
    if(L[i]<=R[j])
    {
      a[k]=L[i]; i++;
    }
    else
      {a[k]=R[j]; j++;}
    k++;
  }
  while(i<n1)
    {a[k]=L[i]; i++; k++;}
  while(j<n2)
    {a[k]=R[j]; j++; k++;}
}
void mergeSort(unsigned long int a[],unsigned long int l,unsigned long int r)
{
  if(l<r)
  {
    unsigned long int m=l+(r-l)/2;
    mergeSort(a,l,m);
    mergeSort(a,m+1,r);
    merge(a,l,m,r);
  }
}
void disp(unsigned long int a[],unsigned long int s)
{
  for(unsigned long int i=0;i<s;i++)
  {
    cout<<a[i]<<" ";
  }
}
int main()
{
  unsigned long int t,a[S],i;
  cin>>t;
  for(i=0;i<t;i++)
  {
    cin>>a[i];
  }
  mergeSort(a,0,t-1);
  disp(a,t);
  return 0;
}

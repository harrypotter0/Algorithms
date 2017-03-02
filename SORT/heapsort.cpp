#include <bits/stdc++.h>
using namespace std;
int minheap(int a[],int n)
{
int tmp,l,r;
for(int i=n/2;i>=1;i--)
{
tmp=i;
l=2*i;
r=2*i+1;
if(l<n && a[l]<a[tmp])
tmp=l;
if(r<n && a[r]<a[tmp])
tmp=r;
if(tmp!=i)
{
swap(a[i],a[tmp]);
minheap(a,n);
}
}}
int heapsort(int a[],int n)
{
  int i,j ;
  int sorted[20];
  sorted[0]=-1;
  for(i=n,j=1;i>=1,j<=n;i--,j++)
  {
  minheap(a,i);
  sorted[j]=a[1];
  a[1]=a[i];
  }
  for(i=1;i<=n;i++)
  a[i]=sorted[i];

}
int main() {
    int a[20],n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>a[i];
    cout<<"Unsorted array \n";
    for(i=1;i<=n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    heapsort(a,n);
    cout<<"Sorted array \n";
    for(i=1;i<=n;i++)
    cout<<a[i]<<" ";
    return 0;
    }


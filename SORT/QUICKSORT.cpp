#include<bits/stdc++.h>
using namespace std;
int part(int arr[],int l,int r)
{
int p =arr[r];
while(1)
{
if(p==arr[l])
{
if(p>arr[r])
swap(arr[l],arr[r]);
else
r--;
for(int i=0;i<7;i++)
cout<<arr[i]<<" ";
cout<<endl;
if(l==r)return l;
}
if(p==arr[r])
{
if(p<arr[l])
swap(arr[l],arr[r]);
else
l++;
for(int i=0;i<7;i++)
cout<<arr[i]<<" ";
cout<<endl;
if(l==r)return l;
}
}
}

int quick(int arr[],int l,int r)
{
if(l<r)
{
int pi = part(arr,l,r);
quick(arr,l,pi-1);
quick(arr,pi+1,r);
}
}
int main ()
{
int arr[]={10,80,30,90,40,50,70},pi;
quick(arr,0,6);
cout<<"SORTED ARRAY IS :"<<endl;
for(int i=0;i<7;i++)
cout<<arr[i]<<" ";
return 0;
}

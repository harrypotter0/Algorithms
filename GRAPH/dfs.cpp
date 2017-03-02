#include<bits/stdc++.h>
using namespace std;
/*
bool prime(int n)
{
for(int i=2;i<=sqrt(n);i++)
{
if(n%i==0)
return false;
}
return true ;
}
*/
void dfs(int arr[][20],int n,int source)
{
int visited[20],i,st[20],top=0;
bool ch = false;
for(i=0;i<n;i++)
visited[i]=0;
visited[source]=1;
st[top]=source;
cout<<source<<" ";
while(top>=0)
{
i=st[top];ch=false;
for(int j=0;j<n;j++)
{
if(visited[j]==0 && arr[i][j]==1){
visited[j]=1;
top++;
st[top]=j;
cout<<j<<" ";
ch=true;break;
}
}
if(!ch)top--;
}
}
int main ()
{
int n;
cin>>n;
int arr[][20]= {
		{0,1,0,0},
		{0,1,1,1},
		{1,0,0,1},
		{0,0,1,0}
	};
	dfs(arr,4,n);
return 0;
}

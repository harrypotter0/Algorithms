#include<bits/stdc++.h>
using namespace std;
int qu[20];
int queue_front, queue_end;

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
void en(int v)
{
qu[queue_end]=v;
queue_end++;
}
int de()
{
int i= queue_front;
queue_front++;
return qu[i];
}
void bfs(int arr[][20],int n,int source)
{
int visited[20],i;
for( i=0;i<n;i++)
visited[i]=0;
queue_front=0;queue_end=0;
visited[source]=1;
en(source);
cout<<source<<" ";
while(queue_front<=queue_end)
{
i=de();
for(int j=0;j<n;j++)
{
if(visited[j]==0 && arr[i][j]==1){
visited[j]=1;
en(j);
cout<<j<<" ";
}}
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
	bfs(arr,4,n);
return 0;
}

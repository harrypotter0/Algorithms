#include<conio.h>
#include<stdio.h>
void main()
{
int i,n,j,a[1000][2],b[1000];
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<2;j++)
scanf("%d",&a[i][j]);
}
for(i=0;i<n;i++)
{
if((a[i][0]%2==0&&a[i][1]%2==0&&a[i][1]==a[i][0]+2)||(a[i][0]%2==1&&a[i][1]%2==1&&a[i][1]==a[i][0]+2)||(a[i][0]%2==1&&a[i][1]==a[i][0]+1)||(a[i][0]%2==0&&a[i][1]==a[i][0]-1))
b[i]=1;
else
b[i]=0;
}
for(i=0;i<n;i++)
if(b[i]==1)
printf("YES\n");
else
printf("NO\n");
}

#include "stdio.h"
#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))
int  main()
{
long long int n,m,t,a[501501],f=0;
scanf("%I64d",&t);
while(t--)
{
scanf("%I64d%I64d",&n,&m);
if(abs(n-m)==2)
f=1;
if(abs(n-m)==1 && MAX(n,m)%2==0)
f=1;
if(f==0)
printf("NO\n");
else
printf("YES\n");
f=0;
}
return 0;
}

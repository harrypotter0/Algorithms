/*
Hey , this one is mine ..
make a new one for yourself
             ---->>AKASH KANDPAL
             */
using namespace std;
#include "bits/stdc++.h"
#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>
#include <ctype.h>
#include <string.h>
#include <typeinfo>
#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <bitset>
#include <algorithm>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <cassert>
#include <queue>
#define st string
#define ld long double
#define mod 1000000007
typedef long long int ll;
typedef pair < int , int > pii;
typedef vector <int> vi;
typedef vector <char> vc;
#define eps 1e-8
#define PI 3.141592653589793
#define ld long double
#define mp make_pair
#define pb push_back
#define sz(x) (int)x.size()
#define F first
#define S second
ll INF = 1e18;
const int N = 600331;
#define MOD 1e9+7

/////////////////////////////////////////////////////
vector<int> comp;
int colored[N];
vi g[N];
void dfs(int v)
{
	comp.push_back(v);
	colored[v]=1;
	for (ll i=0;i<g[v].size();i++)
	{
		ll to=g[v][i];
		if (colored[to])
			continue;
		dfs(to);
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
ll lcm(ll a,ll b)
{
    ll m,n;
    m=a;
    n=b;
    while(m!=n)
    {
	if(m < n)
	m=m+a;
	else
    n=n+b;
    }
    return m;
}
////////////////////////////////////////////////////////////////////////

void cal()
{
  string week[]={"sun","mon","tue","wed","thu","fri","sat"};
  ll year,days;
  cin>>year;
  days = 365*year + (year-1)/4 - (year-1)/100 + (year-1)/400 ;
  cout<<week[days%7]<<endl;
}
  ////////////////////////////////////////////////////////////////////////////
ll palin(ll x)
  {
  ll t=x,y=0;
  while(t>0)
  {
  ll rem =t%10;
  y=y*10+rem;
  t/=10;
  }
  if(x==y)
  return 1;
  else
  return 0;
  }
////////////////////////////////////////////////////////////////////////////
/*for(i=0;i<n;i++)
v.pb(i+1);f trgf  bvb gbnnnnnn             m,\ n b  cbbbbb  hgbn jyu  gbvv m,;hhjyyuu
for(i=0;i<k;i++)
{
cin>>a;
a=a%v.size();
for(j=0;j<a;j++)
rotate(v.begin(),v.begin()+1,v.end());
cout<<v[0]<<" ";
v.erase(v.begin());
*/
///////////////////////////////////////////////////////////////////////////
bool f(char ch1,char ch2){
	if(tolower(ch1)!=tolower(ch2)){
		return tolower(ch1)<tolower(ch2);
	}
	return ch1<ch2;
}
////////////////////////////////////////////////////////////////////////////
   /* double b = 2.0459332;
    stringstream ss;
    ss << fixed << setprecision(3) << b;
    string v;
    ss >> v; // v will be "2.046"
*/
///////////////////////////////////////////////////////////////////////////
int main(){
    //ios :: sync_with_stdio(0); cin.tie(0);
    //cout << (fixed) << setprecision(10);
ll t=0,mini=1e9,maxi=-1e9,sum=0;
ll i,d[201201],e[201021],j;
st a="ABCF";st b ="ACF";
ll n =a.length();
ll m =b.length();
ll v[n+1][m+1];
//ld sum1=0,sum2=0;
//st s;
//map<int, int> mp;
//vi v;
//getline(cin,s);
//vi v;
//memset(dp , -1 , sizeof(dp));
//sort(s.begin(),s.end(),f);
for(i=0;i<=n;i++)
{
for(j=0;j<=m;j++)
{
if(i==0 || j==0)
v[i][j]=0;
else if(a[i-1]==b[j-1])
v[i][j]=1+v[i-1][j-1];
else
v[i][j]=max(v[i][j-1],v[i-1][j]);
}}
for(i=0;i<=n;i++)
{for(j=0;j<=m;j++)
{
cout<<v[i][j]<<" ";
}
cout<<endl;
}
st l;
i=v[n][m];ll r=n;ll c= m;
while(i>0)
{
if(a[r-1]==b[c-1]){
cout<<a[r-1];
i--;r--;c--;
}
else if(v[r-1][c]>v[r][c-1])
r--;
else c--;
}
return 0;
}

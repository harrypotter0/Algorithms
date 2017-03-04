    #include<bits/stdc++.h>
    using namespace std;
    void lps(string s)
    {
    int beg=0,i,maxlen,cur,j;
    int n =s.size();
    bool arr[10][10];
    for(i=0;i<n;i++)
    {arr[i][i]=true;}
    for(i=0;i<n-1;i++)
    {if(s[i]==s[i+1])
    arr[i][i+1]=true;
    maxlen=2;beg=i;}
    for(cur=2;cur<n;cur++)
    {
    for(i=0;i<n-cur;i++)
    {
    j=i+cur;
    if(s[i]==s[j])
    {
    beg=i;
    maxlen=cur+1;
    }
    }}
    cout<<s.substr(beg,maxlen);
    }
    int main ()
    {
    string s;
    cin>>s;
    lps(s);
    return 0;
    }

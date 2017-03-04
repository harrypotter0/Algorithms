    #include<bits/stdc++.h>
    using namespace std;
    void lcs(string x,string y,int m, int n)
    {
    int i=0,j=0;
    int arr[10][10],ar[10][10];
    string str;
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
    arr[i][j]=0;
    ar[i][j]=-1;
    }}
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
    if(x[i]==y[j])
    {
    if(i==0 || j==0)
    {arr[i][j]=1;}
    else
    {arr[i][j]=arr[i-1][j-1]+1;}
    ar[i][j]=0;
    }
    else
    {
    if(i>0 && j>0){
    if(arr[i-1][j]>=arr[i][j-1])
    {
    arr[i][j]=arr[i-1][j];
    ar[i][j]=2;
    }
    else
    {
    arr[i][j]=arr[i][j-1];
    ar[i][j]=1;
    }
    }
    else if(i==0 && j>0)
    {
    arr[i][j]=arr[i][j-1];
    ar[i][j]=1;
    }
    else if(j==0 && i>0)
    {
    arr[i][j]=arr[i][j-1];
    ar[i][j]=1;
    }
    }
    }
    }
    i=m-1;j=n-1;int k=0;
    while(i>=0 && j>=0)
    {
    switch(ar[i][j])
    {
    case 0 :
    str.append(x,i,1);
    i--;j--;++k;cout<<"s1/s2"<<endl;break;
    case 1 :
    j--;cout<<"s1"<<endl;break;
    case 2 :
    i--;cout<<"s2"<<endl;break;
    }
    }
    for(i=k;i>=0;i--)
    cout<<str[i];
    }
    int main ()
    {
    string x="abcdaf",y="acbcf",str;
    lcs(x,y,x.size(),y.size());
    cout<<endl;
    return 0;
    }

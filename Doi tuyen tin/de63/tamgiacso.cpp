#include<bits/stdc++.h>
using namespace std;
long long n, a[105][105];

int main()
{
    freopen("tamgiacso.Inp", "r", stdin);
    freopen("tamgiacso.Out", "w", stdout);
    cin>>n;
    for(int i=1;i<=n;i++) 
    {
        for(int j=1;j<=i;j++) 
            cin>>a[i][j];
        a[i][0]=a[i][i+1]=-1;            
    }        
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            a[i][j]+=max(a[i-1][j-1],a[i-1][j]);
    }
    long long p=a[n][1];
    for(int j=2;j<=n;j++)
    {
        if(p<a[n][j])
            p=a[n][j];
    }
    cout<<p;
}
#include<bits/stdc++.h>
using namespace std;
string x, y;
long long dp[10001][10001];

int main()
{
    freopen("Replacechar.inp","r",stdin);
    freopen("Replacechar.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>x;
    y="";
    for(int i=0; i<x.size(); i++)
    {
        if(x[i] != '?')
            y+=x[i];
    }
    for(int i=1; i<y.size(); i++)
    if(y[i-1] > y[i]){cout<<0; return 0;}
    x="a"+x+"z";
    long long ans=1, base = 1e9+7, n=x.size();
    for(int i=1; i<=n-2; i++)
        if(x[i] == '?')
    {
        int e= x[i+1] - x[i-1]+1;
        ans=ans*e;
        ans %= base;
    }
    cout<<ans;
}

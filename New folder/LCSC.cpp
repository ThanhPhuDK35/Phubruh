#include<bits/stdc++.h>
using namespace std;
string x, y;
long long dp[10001][10001];

int main()
{
    freopen("LCSC.inp","r",stdin);
    freopen("LCSC.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> x>>y;
    long long n, m;
    n=x.size();
    m=y.size();
    x=" "+x;
    y=" "+y;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            if(x[i] == y[j]) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = 0;
    long long len=0, pos;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
    if(len<dp[i][j]){len = dp[i][j]; pos=i-len+1;}
    cout<<len<<"\n";
    cout<<x.substr(pos, len);
}

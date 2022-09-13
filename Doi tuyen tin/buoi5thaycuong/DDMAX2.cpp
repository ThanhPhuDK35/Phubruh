#include <bits/stdc++.h>
using namespace std;
long long a[5001], n, k, dp[5001][5001];

int main()
{
    freopen("DDMAX2.INP","r",stdin);
    freopen("DDMAX2.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin>>n>>k;
    for (int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            dp[i][j] = max(dp[i][j-1],a[j]);
        }
    }
    while(k--)
    {
        long long x,y,ma=0;
        cin>>x>>y;
        cout<<dp[x][y]<<"\n";
    }
}

#include<bits/stdc++.h>
using namespace std ;
long long m, n, a[2001], b[2001], dp[2001][2001];

int main ()
{
	freopen("SESAME.inp" , "r" , stdin);
	freopen("SESAME.out" , "w" , stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0); 
    cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for(int i = 1; i <= m; i++)
	{
		cin >> b[i];
	}
    dp[1][1] = abs(a[1] - b[1]);
    for(int j=1; j<=m; j++)
    {
        for(int i=j; i<=n; i++)
        {
            if(i==j)
            {
                dp[i][j]=abs(a[i] - b[j]) + dp[i-1][j-1];
                continue;;
            }
            dp[i][j] = min(dp[i-1][j], abs(a[i] - b[j]) + dp[i-1][j-1]);
        }
    }
    cout<<dp[n][m];
}

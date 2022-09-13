#include<bits/stdc++.h>
using namespace std;
long long n, d[1000005], dp[1000005], x, ans;

signed main()
{
    freopen("DelNum.Inp", "r", stdin);
    freopen("DelNum.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        d[x]++;
        dp[x]++;
    }
    ans = 0;
    for (int i = 1; i <= 1000000; i++)
    {
        if (d[i] == 0) continue;
        ans = max(ans, dp[i]);
        for (int j = i + i; j <= 1000005; j += i)
        {
            if (!d[j]) continue;
            dp[j] = max(dp[j], dp[i] + d[j]);
        }
    }
    cout << n - ans;
}
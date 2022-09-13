#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long n, a[1000001], s[1000001], ma = -1e18, ans = -1e18;

int main()
{
    freopen("GCD2.Inp", "r", stdin);
    freopen("GCD2.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i]; 
        s[a[i]]++; 
        ma = max(ma, a[i]);
    }
    for (ll i = 1; i <= n; i++)
    {
        if (s[a[i]] >= 2) ans = max(ans, a[i]);
        for (ll j = a[i]+a[i]; j <= ma; j+=a[i])
        {
            if (s[j] != 0) ans = max(ans, __gcd(j, a[i]));
        }
    }
    cout << ans;
}

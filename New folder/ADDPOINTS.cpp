#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, a[10000001], s, b, ans = 0;

int main()
{
    //freopen("ADDPOINTS.Inp", "r", stdin);
    //freopen("ADDPOINTS.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a+1, a+1+n); 
    b = a[2] - a[1];
    for (ll i = 3; i <= n; i++)
    {
        s = a[i] - a[i-1];
        b = __gcd(b, s);
    }
    for (ll i = 2; i <= n; i++)
    {
        ans += (a[i] - a[i-1] - b) / b;
    }
    cout << ans;
}
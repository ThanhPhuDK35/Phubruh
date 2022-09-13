#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, q, a, x;

signed main()
{
    freopen("TK1.Inp", "r", stdin);
    freopen("TK1.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    map <ll, ll> s;
    cin>>n>>q;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a; s[a]++;
    }
    while (q--)
    {
        cin >> x;
        cout << s[x] << "\n";
    }
}
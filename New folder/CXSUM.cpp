#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, q, a[1000009], x;

int main()
{
    freopen("CXSUM.Inp", "r", stdin);
    freopen("CXSUM.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    map <ll, ll> s;
    cin >> n >> q;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 2; i <= n; i++)
    {
        for (ll j = 1; j < i; j++)
        {
            s[a[i]+a[j]]++;
        }
    }
    while(q--)
    {
        cin >> x;
        cout<<s[x]<<"\n";
    }
}
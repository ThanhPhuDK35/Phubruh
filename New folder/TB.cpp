#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, b[1000009], a[1000009], t;

int main()
{
    freopen("TB.Inp", "r", stdin);
    freopen("TB.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (ll i = 1; i <= n; i++) cin >> b[i];
    for (ll i = 1; i <= n; i++){
        a[i] = b[i] * i - t;
        t+=a[i];
        cout << a[i] << " ";
    }
}

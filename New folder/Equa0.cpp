#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, a[10000009], ans = 0;

int main()
{
    freopen("Equa0.Inp", "r", stdin);
    freopen("Equa0.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    map <ll, ll> s;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] > 0) s[a[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < 0) 
           ans += s[abs(a[i])];
    }
    cout << ans;
}

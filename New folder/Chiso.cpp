#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k, s[10000009], a, x;

int main()
{
    freopen("Chiso.Inp", "r", stdin);
    freopen("Chiso.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    map<ll, ll> s1;
    cin>>n>>k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        s[i] = s[i-1] + a;
        if (s1[s[i]] == 0) 
            s1[s[i]] = i;
    }
    while(k--)
    {
        cin >> x;
        if (s1[x] == 0) 
            cout << -1 << "\n";
        else 
            cout << s1[x] << "\n";
    }
}
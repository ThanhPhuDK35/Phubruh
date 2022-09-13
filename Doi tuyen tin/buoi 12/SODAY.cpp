#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, q, a, x;

signed main()
{
    freopen("SODAY.Inp", "r", stdin);
    freopen("SODAY.Out", "w", stdout);
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
        if(s[x]>0)
        cout << "1" << "\n";
        else
        cout<<"0"<<"\n";
    }
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, a[10000001], s, b, ans = 0, m=0;

int main()
{
    freopen("T1H.Inp", "r", stdin);
    freopen("T1H.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin>>n; 
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        m=max(m, a[i]);
    }
    for(ll i=1; i<=n; i++)
    {
        s=s+(m-a[i]);
    }
    cout<<s;
}
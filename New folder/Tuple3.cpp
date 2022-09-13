#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll x,y,z,n,a[10000001];

int main()
{
    freopen("Tuple3.Inp", "r", stdin);
    freopen("Tuple3.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for(ll i = 1; i <= n; i++)
        cin>>a[i];
    x = 0;
    sort(a+1,a+1+n);
    ll k = 1, ans = 0;
    for(ll i = 3; i <= n; i++)
    {
        while(a[i] - a[k] > 2)
              k++;
       ll pos = i - k;
        ans += pos*(pos-1)/2;
    }
    cout<<ans;
}

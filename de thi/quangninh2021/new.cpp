#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FOD(i, a, b) for(int i = a; i >= b; --i)
#define fi first
#define se second
#define eb emplace_back
#define pb push_back
#define nmax 100007
#define ld long double
#define ll long long
#define ull unsigned long long
void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
ll n, a, b;
ll tong(ll x, ll y)
{
    return (y * (y + 1) / 2) - (x * (x - 1) / 2);
}
int main()
{
    faster();
    cin >> n >> a >> b;
    if(a > b) swap(a, b);
    ll ans = 0;
    // <= a
    ll tmp1 = a / n;
    ans += tong(1, tmp1) * n + tmp1;
    // > a && <= b
    ll tmp2 = b / n;
    ans += (tmp2 - tmp1) * (a + 1);
    // > b
    ll tmp3 = (a + b) / n;
    ans += (tmp3 - tmp2) * (a + b + 1) - tong(tmp2 + 1, tmp3) * n;
    cout << ans; 
    return 0;
}
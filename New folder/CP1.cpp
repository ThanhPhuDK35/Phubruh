#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
ll n, a, ans1, ans2, kq1, kq2;
int main()
{
    freopen("CP1.Inp", "r", stdin);
    freopen("CP1.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (ll i = 1; i <= n; i++){
        cin >> a;
        ans1 = sqrt(a);
        cout << ans1 * ans1 << "\n";
    }
}

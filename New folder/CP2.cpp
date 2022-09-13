#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
bool scp(ll n){
    if ((ll)sqrt(n) * (ll)sqrt(n) == n) return true;
    return false;
}
ll n, a, ans1, ans2, kq1, kq2;
int main()
{
    freopen("CP2.Inp", "r", stdin);
    freopen("CP2.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (ll i = 1; i <= n; i++){
        cin >> a;
        if (scp(a)) cout << a << "\n";
        else{
            ans1 = sqrt(a)+1;
            cout << ans1 * ans1 << "\n";
        }
    }
}

#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
ll t, n, a[10001], check;
int main(){
    freopen("CheckPer.Inp", "r", stdin);
    freopen("CheckPer.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> t;
    for (ll i = 1; i <= t; i++){
        check = 1;
        memset(a, 0, sizeof(a));
        cin >> n;
        for (ll j = 1; j <= n; j++) cin >> a[j];
        sort(a+1, a+1+n);
        for (ll j = 1; j <= n; j++) if (a[j] != j) {cout << "No" << "\n"; check = 0; break;}
        if (check == 1) cout << "Yes" << "\n";
    }
}

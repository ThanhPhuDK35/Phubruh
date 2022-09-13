#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, q, a[10000001], x, ma = -1e18, mi = 1e18, dem = 0;
int main()
{
    freopen("TK2.Inp", "r", stdin);
    freopen("TK2.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    map <ll, ll> s1;
    cin >> n >> q;
    for (ll i = 1; i <= n; i++){
        cin >> a[i];
        ma = max(ma, a[i]);
        mi = min(mi, a[i]);
    }
    sort(a+1, a+1+n);
    for (ll i = 1; i <= n; i++){
        if (a[i] != a[i-1]){
            s1[a[i]] = n-dem;
            dem++;
        }
        else dem++;
    }
    while (q--){
        cin >> x;
        if (x > ma) cout << 0 << "\n";
        else if (x == ma) cout << 1 << "\n";
        else if (x <= mi) cout << n << "\n";
        else for (ll i = x; i >= mi; i--){
            if (s1[i] != 0){
                if (i == x) {cout << s1[i] << "\n"; break;}
                else {cout << s1[i]-1 << "\n"; break;}
            }
        }
    }
}
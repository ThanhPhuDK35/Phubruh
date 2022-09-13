#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k, a[109], b[109], s = 1;

int main()
{
    freopen("MoveRobot.Inp", "r", stdin);
    freopen("MoveRobot.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for (ll i = 1; i <= k; i++) cin >> a[i] >> b[i];
    for (ll i = 1; i <= k; i++){
        if (a[i] == 1) s+=b[i];
        if (a[i] == 2) s-=b[i];
        while (s > n){
            s-=n;
            while (s < 1) s+=n;
        }
        while (s < 1){
            s+=n;
            while (s > n) s-=n;
        }
        cout << s << "\n";
    }
}

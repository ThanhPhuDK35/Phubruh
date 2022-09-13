#include <bits/stdc++.h>
using namespace std;
long long a, b, tmp, ans = 0;

int main()
{
    freopen("LT2AB.Inp", "r", stdin);
    freopen("LT2AB.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> a >> b;
    long long i = 0;
    while (tmp <= b){
        tmp = pow(2, i);
        if (tmp >= a && tmp <= b){
            ans++;
        }
        i++;
    }
    cout << ans;
}

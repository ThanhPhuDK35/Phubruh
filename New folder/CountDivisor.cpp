#include <bits/stdc++.h>
using namespace std;
long long a, b, c, a1, a2, a3, ans = 1;

int main()
{
    freopen("CountDivisor.Inp", "r", stdin);
    freopen("CountDivisor.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b >> c;
    a1 = __gcd(a, b);
    a2 = __gcd(b, c);
    a3 = __gcd(a1, a2);
    for(int i = 1; i <= a3/2; i++)
        if (a3 % i == 0)
        ans++;
    cout << ans;
}

#include <bits/stdc++.h>
using namespace std;
long long a[1001], x, ans = 1e18;

int main()
{
    freopen("FindX2.Inp", "r", stdin);
    freopen("FindX2.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for (int i = 1; i <= 4; i++)
        cin >> a[i];
    for (int i = 1; i <= 4; i++)
    {
        x = a[i];
        ans = min(ans, abs(x-a[1]) + abs(x-a[2]) + abs(x-a[3]) + abs(x-a[4]));
    }
    cout << ans;
}


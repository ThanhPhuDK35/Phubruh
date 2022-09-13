#include <bits/stdc++.h>
using namespace std;
long long n, a[10000001], ans = 0;
int main()
{
    freopen("DCD.Inp", "r", stdin);
    freopen("DCD.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a+1, a+1+n);
    for (int i = 1; i <= n; i++)
    {
        if (i != n/2+1)
        {
            ans += abs(a[i] - a[n/2+1]);
        }
    }
    cout << ans;
}

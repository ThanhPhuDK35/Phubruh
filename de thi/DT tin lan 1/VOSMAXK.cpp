#include <bits/stdc++.h>
using namespace std;
long long n, k, a[10000001], pos1 = 1, pos2 = 0, ans = 0, ma = -1e18;

int main()
{
    freopen("VOSMAXK.Inp", "r", stdin);
    freopen("VOSMAXK.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        ma = max(ma, a[i]);
        if (ma == k)
        {
            if (ma == a[i]) pos2 = i;
            ans += pos2 - pos1 + 1;
        }
        else if (ma > k)
        {
            pos1 = i + 1; pos2 = 0;
            ma = a[i+1];
        }
}
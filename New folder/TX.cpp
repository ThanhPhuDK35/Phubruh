#include <bits/stdc++.h>
using namespace std;
long long n, a[20000000], ans = 0, k;

int main()
{
    freopen("TX.Inp", "r", stdin);
    freopen("TX.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (long long i = 1; i <= 2*n; i++)
    {
        cin >> a[i];
        ans+=a[i];
    }
    k = 2 * n;
    long long i = 1;
    while (i-1 != k)
    {
        cout << ans << "\n";
        ans = ans - a[i] - a[k];
        i++, k--;
    }
}

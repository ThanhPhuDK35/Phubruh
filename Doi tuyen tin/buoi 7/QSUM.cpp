#include <bits/stdc++.h>
using namespace std;
long long n, q, a[100001], l, s[100001], r;

int main()
{
    freopen("QSUM.Inp", "r", stdin);
    freopen("QSUM.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s[i]=s[i-1]+a[i];
    }
    while(q--)
    {
        cin >> l >> r;
        cout << s[r] - s[l-1] << "\n";
    }
}


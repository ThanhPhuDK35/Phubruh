#include <bits/stdc++.h>
using namespace std;
long long n, m, a[ 200001], b[ 200001], ans = 0, ans2, ma;

int main()
{
    freopen("CS1.Inp", "r", stdin);
    freopen("CS1.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> b[i];
    sort(a+1, a+1+n);
    sort(b+1, b+1+m, greater<int>());
    ans = abs(a[n] - b[m]);
    ans2 = abs(a[1] - b[1]);
    ma = max(ans, ans2);
    cout << ma;

}

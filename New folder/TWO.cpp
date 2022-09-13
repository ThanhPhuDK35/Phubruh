#include <bits/stdc++.h>
using namespace std;
const long long nmax = 1e6+9;
const long long bmax = 1e9+6;
long long n, a[nmax], ma = 1e18;

int main()
{
    freopen("Two.Inp", "r", stdin);
    freopen("Two.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    map <long long, long long> s;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (s[a[i]] != 0)
            ma = min(ma, (i - s[a[i]]) * (i - s[a[i]]));
        s[a[i]] = i;
    }
    cout << ma;
}

#include <bits/stdc++.h>
using namespace std;
long long a[1001], x, ans = 1e18, s=1e18, e;

int main()
{
    freopen("NumX.Inp", "r", stdin);
    freopen("NumX.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for (int i = 1; i <= 4; i++)
        cin >> a[i];
    sort(a+1, a+1+4);
    cout<<a[3]-a[2]+1;
}


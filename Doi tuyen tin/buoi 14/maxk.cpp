#include <bits/stdc++.h>
using namespace std;
long long n, s[1000001], a[1000001], ans = -1e18;

int main()
{
    freopen("maxk.inp","r",stdin);
    freopen("maxk.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin >> n;
    s[0] = 1e18;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s[i] = min(s[i-1], a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        ans = max(ans, a[i] - s[i]);
    }
    cout << ans;
}
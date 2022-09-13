#include <bits/stdc++.h>
using namespace std;
long long d, n, a[1000001], s[1000001], p, ans, p1;

int main()
{
    freopen("DogCat.Inp", "r", stdin);
    freopen("DogCat.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> d >> n;
    while(d--)
    {
        p = 1; ans = 0; p1=n;
        memset(a, 0, sizeof(a));
        memset(s, 0, sizeof(s));
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] == 1){s[p] = i; p++;}
        }
        p--;
        for (int i = p; i >= 1; i--)
        {
            ans += abs(s[i] - p1);
            p1--;
        }
        cout << ans << "\n";
    }
}

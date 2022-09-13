#include <bits/stdc++.h>
using namespace std;
long long t, n, k, a[1000001], b[1000001], c[1000001], mi = 0, ans = 0, tong = 0;

int main()
{
    freopen("SumMaxK.Inp", "r", stdin);
    freopen("SumMaxK.Out", "w", stdout);
    cin>>t;
    while(t--)
    {
        mi=ans=tong = 0;
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            b[i] = b[i-1]+a[i];
        }
        long long s=0;
        for (int i = 1; i <= n; i++)
        {
            c[i] = max(s, max(a[i], c[i-1] + a[i]));
        }
        for (int i = 1; i <= n; i++)
        {
            tong += a[i]; 
            tong -= a[i-k];
            if (i == k) 
                ans = tong;
            else if (i > k) 
                ans = max(ans, tong + c[i-k]);
        }
        cout << ans << "\n";
    }
}
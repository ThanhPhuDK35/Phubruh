#include <bits/stdc++.h>
using namespace std;
long long n, m, a[2000001], b[2000001], ans = 0, s[2000001], c[2000001];

void sub2()
{
    long long ma = -1e18, dem = 0;
    for(int i = 1; i <= n; i++)
    {
        s[a[i]]++;
    }
    for(int i = 1; i * i <= 1e6; i++)
    {
        for (int j = i; j <= 1e6; j+=i)
        {
            c[i] += s[j];
        }
    }
    for(int i = 1; i <= m; i++)
    {
        ma = max(ma, c[b[i]] + s[0]);
    }
    cout << ma;
}

void sub1()
{
    long long s = 0, ma = -1e18;
    for(int i = 1; i <= m; i++)
    {
        s = 0;
        for(int j = 1; j <= n; j++)
        {
            if (a[j] % b[i] == 0) 
                s++;
        }
        ma = max(ma, s);
    }
    cout << ma;
}

int main()
{
    freopen("UocSo.Inp", "r", stdin);
    freopen("UocSo.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= m; i++)
    {
        cin >> b[i];
    }
    if (n <= 1000 && m <= 1000) sub1();
    else sub2();
}
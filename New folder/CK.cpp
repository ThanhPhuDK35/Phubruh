#include <bits/stdc++.h>
using namespace std;
long long n, a[10000001], x[10000001], ans1, ans2, mi = 1e18;

void dak()
{
    long long tmp = 0, s = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x[i] == 1) tmp += a[i];
        s += a[i];
    }
    long long tmp2 = s - tmp;
    mi = min(mi, abs(tmp2 - tmp));
}

void thu(long long i)
{
    for (int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if (i == n) 
            dak();
        else thu(i+1);
    }
}

int main()
{
    freopen("CK.Inp", "r", stdin);
    freopen("CK.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    thu(1);
    cout << mi;
}
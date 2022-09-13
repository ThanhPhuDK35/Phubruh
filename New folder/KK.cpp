#include <bits/stdc++.h>
using namespace std;
long long a[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8}, t, n;

long long ldg(long long n)
{
    if (n < 10)
    {
        return a[n];
    }
    if (((n/10)%10) % 2 == 0)
    {
        return (6 * ldg(n/5) * a[n%10]) % 10;
    }
    else
    {
        return (4 * ldg(n/5) * a[n%10]) % 10;
    }
}

int main()
{
    freopen("KK.Inp", "r", stdin);
    freopen("KK.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << ldg(n) << "\n";
    }
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
ll a[1001], b[1001], n, m, x, s;
int main()
{
    freopen("TwoSeqEquaX2.Inp", "r", stdin);
    freopen("TwoSeqEquaX2.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    s = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    cin >> x;
    for (int i = 0; i < n; i++)
         for (int j = i+1; j < m; j++)
             if (a[i] + b[j] == x)
                s++;
    cout << s;
}

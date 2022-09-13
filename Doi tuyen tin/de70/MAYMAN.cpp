#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long n, p, a[10000009], mi = 1e18, x = 0, pos, s = 0, pos1, pos2, b[10000009];

int main()
{
    freopen("MAYMAN.Inp", "r", stdin);
    freopen("MAYMAN.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> p;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (mi > a[i])
        {
            mi = a[i];
            x++;
            b[x] = i;
        }
    }
    mi = 0;
    pos = x;
    for (int i = n; i >= 1; i--)
    {
        if (mi < a[i])
        {
            mi = a[i];
            while(pos > 0 && mi-a[b[pos]] >= p)
            {
                pos--;
            }
            if (pos < x && i - b[pos+1] >= s)
            {
                s = i-b[pos+1];
                pos2 = i;
                pos1 = b[pos+1];
            }
        }
    }
    if (s == 0) cout << 0;
    else cout << pos1 << " " << pos2;
}

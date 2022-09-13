#include <bits/stdc++.h>
using namespace std;
long long n, a[1000001], b[10000001], x, s;
map <long long, long long> c;

int main()
{
    freopen("CountP.Inp", "r", stdin);
    freopen("CountP.Out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
        c[a[i]-b[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        s = a[i]-b[i];
        c[s]--;
        if (s < 0) 
           s = abs(s);
        else 
           s = s-s*2;
        x = x+c[s];
    }
    cout << x;
}
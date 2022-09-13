#include <bits/stdc++.h>
using namespace std;
long long n, x, a[1000005], res, d, c, g;

bool kt(long long g)
{
     long long s = 0;
     for (int i= 1; i<=g; i++)
        s = s+ a[i];
     if (s >= x) return true;
     for (int i=g+1; i<=n; i++)
     {
         s = s + a[i] - a[i -g];
         if (s >= x) return true;
    }
    return false;
}

int main()  
{
    freopen("SUB.inp", "r", stdin);
    freopen("SUB.out", "w", stdout);
    cin>>n>>x;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    c=n; d=1;
    res = n;
    while (d <= c)
    {
        g = (d+c)/2;
        if (kt(g))
        {
            res = g;
            c = g - 1;
        }
        else
            d = g+1;
    }
    cout << res;
    return 0;
}

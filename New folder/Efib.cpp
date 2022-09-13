#include <bits/stdc++.h>
using namespace std;
long long t, n, ans = 0, f[1000001], i;

int main()
{
    freopen("EFib.Inp", "r", stdin);
    freopen("EFib.Out", "w", stdout);
    cin >> n;
    f[1] = f[2] = 1;
    i = 2;
    while(f[i] <= n)
    {
        i++;
        f[i] = f[i-1] + f[i-2];
    }
    for (int j = i - 1; j >= 1; j--)
    
        while(n >= f[j])
        {
            n -= f[j]; 
            ans++;
        }
   cout<<ans;
}
 

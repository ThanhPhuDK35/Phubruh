#include <bits/stdc++.h>
using namespace std;
long long n, a[200001], s[200001], k, ma=-1e9;

int main()
{
    freopen("ChiaHet7.Inp", "r", stdin);
    freopen("ChiaHet7.Out", "w", stdout);
    cin >> n;
    k = 7;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i]+=a[i-1];
    }
    for(int i = 1; i <= n; i++)
    {
        a[i]%=k;
        if(!s[a[i]]) s[a[i]] = i;
    }
    for(int i = 1; i <= n; i++)
        ma = max(ma, i - s[a[i]]);
    cout << ma;
}

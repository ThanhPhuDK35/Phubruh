#include <bits/stdc++.h>
using namespace std;
long long n, a[10000001], s[10000001], ma, t;
map<long long,long long> b;

int main()
{
    freopen("Seq.Inp", "r", stdin);
    freopen("Seq.Out", "w", stdout);
    cin>>n;
    s[0]=0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s[i] = s[i-1] + a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (b[a[i]] == 0) 
           b[a[i]] = i;
        else
        {
            t = b[a[i]];
            ma = max(ma, s[i] - s[t-1]);
        }
    }
    cout << ma;
}
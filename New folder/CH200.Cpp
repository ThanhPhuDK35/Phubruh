#include <bits/stdc++.h>
using namespace std;
long long n, a[2000001], d[20001], s;

int main()
{
    freopen("CH200.Inp", "r", stdin);
    freopen("CH200.Out", "w", stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        a[i]=a[i]%200;
        if(a[i] < 0) a[i] = a[i]+200;
    }
    sort(a+1, a+1+n);
    for(int i=1; i<=n; i++)
    {
        s=s+d[a[i]];
        d[a[i]]++;
    }
    cout<<s;
}

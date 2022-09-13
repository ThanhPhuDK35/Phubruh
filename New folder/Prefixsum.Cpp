#include <bits/stdc++.h>
using namespace std;
long long n, q, a[200001], b[200001], c[200001];

int main()
{
    freopen("Prefixsum.Inp", "r", stdin);
    freopen("Prefixsum.Out", "w", stdout);
    cin>>n>>q;
    b[0]=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    for(int i=1; i<=q; i++)
    {
        cin>>c[i];
    }
    for(int i=1; i<=q ; i++)
    {
        cout<<b[c[i]]<<"\n" ;
    }
}

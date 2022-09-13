#include <bits/stdc++.h>
using namespace std;
long long n, q, a[200001], b[200001], c[200001], d[200001];

int main()
{
    freopen("SumC.Inp", "r", stdin);
    freopen("SumC.Out", "w", stdout);
    cin>>n>>q;
    b[0]=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    for(int i=1; i<=q; i++)
    {
        cin>>c[i]>>d[i];
    }
    for(int i=1; i<=q ; i++)
    {
        cout<<b[d[i]]-b[c[i]]+a[c[i]]<<"\n" ;
    }
}

#include<bits/stdc++.h>
using namespace std;
long long n, q, a[10000001], t, b[10000001];

int main()
{
    freopen("SUMPREFIX.inp","r",stdin);
    freopen("SUMPREFIX.out","w",stdout);
    cin>>n>>q;
    b[0]=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    while(q--)
    {
        cin>>t;
        cout<<b[t]<<"\n";
    }
}
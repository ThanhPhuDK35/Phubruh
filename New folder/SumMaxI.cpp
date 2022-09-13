#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], q, k, m, l[1000001], r[10000001];

int main()
{
    freopen("SumMaxi.inp","r",stdin);
    freopen("SumMaxi.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    l[1]=a[1];
    for(int i=2; i<=n; i++)
    {
        l[i]=max(0LL, l[i-1]) + a[i];
    }
    r[n]=a[n];
    for(int i=n-1; i>=1; i--)
    {
        r[i]=a[i]+max(0LL, r[i+1]);
    }
    cin>>q;
    while(q--)
    {
        cin>>k;
        cout<<l[k] + r[k] - a[k]<<"\n";
    }
}
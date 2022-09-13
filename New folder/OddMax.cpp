#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], m, f[10000001], q, t;

int main()
{
    freopen("OddMax.inp","r",stdin);
    freopen("OddMax.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    m=-1e18;
    f[1]=a[1];
    for(int i=2;i<=n;i++)
    {
        if(a[i]%2!=0)
        {
            f[i]=max(f[i-1],a[i]);
        }
        else 
            f[i]=f[i-1];
    }
    cin>>q;
    while(q--)
    {
        cin>>t;
        cout<<f[t]<<"\n";
    }
}
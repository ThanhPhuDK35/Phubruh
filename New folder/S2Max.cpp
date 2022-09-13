#include<bits/stdc++.h>
using namespace std;
long long t, n, a[10000001], f[100000001], m;

int main()
{
    freopen("S2Max.inp","r",stdin);
    freopen("S2Max.out","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        f[1]=a[1];
        for(int i=2; i<=n; i++)
        {
            f[i]=max(f[i-1], a[i]);
        }
        m=-1e9;
        for(int i=3; i<=n; i++)
        {
            m=max(m, a[i]+f[i-2]);
        }
        cout<<m<<"\n";
    }
}
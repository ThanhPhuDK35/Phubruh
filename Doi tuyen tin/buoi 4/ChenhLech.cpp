#include<bits/stdc++.h>
using namespace std;
long long n, a[10000007], m, s, x, e;

int main()
{
    freopen("ChenhLech.inp","r",stdin);
    freopen("ChenhLech.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    m=1e18;
    for(int i=1; i<=n; i++)
    {
        x=x+a[i];
        if(abs(x-s+x) < m)
        {
            m=abs(x-s+x);
        }

    }
    cout<<m<<"\n";
    x=0;
    for(int i=1; i<=n; i++)
    {
        x=x+a[i];
        if(abs(x-s+x) == m)
        {
            cout<<i<<"\n";
        }
    }
}

#include <bits/stdc++.h>
using namespace std;
long long n, a[10000001], t, b[1000001], ma;

int main()
{
    freopen("SUMMAXC.INP","r",stdin);
    freopen("SUMMAXC.OUT","w",stdout);
    cin>>t;
    while(t--)
    {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        b[0]=0;
        for(int i=1; i<=n; i++)
        {
            b[i]=max(a[i],b[i -1]+a[i]);
        }
        ma=-1e9;
        for(int i=1;i<=n;i++) 
        {
            ma=max(ma, b[i]);
        }

        cout<<ma<<'\n';
    }
}
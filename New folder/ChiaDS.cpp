#include<bits/stdc++.h>
using namespace std;
long long n, a[500001], ma[500001], mi[500002], s;

int main()
{
    freopen("ChiaDS.inp","r",stdin);
    freopen("ChiaDS.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    mi[0]=1e9;
    for(long long i=1; i<=n; i++)
    {
        mi[i]=min(mi[i-1], a[i]);
    }
    ma[n+1]=-1e9;
    for(long long i=n; i>=1; i--)
    {
        ma[i]=max(ma[i+1], a[i]);
    }
    for(int i=1; i<=n; i++)
    {
        if(mi[i] > ma[i+1] && i!=n)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<"No Index";
}
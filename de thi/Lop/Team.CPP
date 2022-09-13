#include <bits/stdc++.h>
using namespace std;
long long t,s,b,n;
int main()
{
    freopen("Team.INP","r",stdin);
    freopen("Team.OUT","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>s>>b>>n;
        long long ans=(s+b+n)/3;
        ans=min(ans,min(s,b));
        cout<<ans<<'\n';
    }
}

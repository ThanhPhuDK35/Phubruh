#include<bits/stdc++.h>
using namespace std;
long long n, t[200001], x;

bool check(long long m)
{
    long long s=0;
    for(int i=1; i<=n; i++)
    {
        s=s+m/t[i];
    }
    if(s >= x) return true;
    else
        return false;
}



int main()
{
    freopen("MTOY.INP","r",stdin);
    freopen("MTOY.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>t[i];
    }
    cin>>x;
    long long l=1, r=1e18, m, ans;
    while(l <= r)
    {
        m=(l+r)/2;
        if(check(m) == true)
        {
            ans=m;
            r=m-1;
        }
        else l=m+1;
    }
    cout<<ans;
}

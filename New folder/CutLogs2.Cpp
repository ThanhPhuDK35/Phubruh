#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], k, mid, l, r, e, ans;

long long check(int x)
{
    long long s=0;
    for(int i=1; i<=n; i++)
    {
        s=s+a[i]/x;
        if(a[i]%x==0)
            s--;
    }
    return s;
}

int main()
{
    freopen("CutLogs2.inp","r",stdin);
    freopen("CutLogs2.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    cin>>k;
    l=1; r=1e9;ans=1e9;
    while(l<=r)
    {
        mid=(l+r)/2;
        e=check(mid);
        if(e <= k)
        {
            ans=mid;
            r=mid-1;
        }
        else
            l=mid+1;
    }
    cout<<ans;
}

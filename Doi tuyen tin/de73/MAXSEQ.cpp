#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], s, l, r, ans, dem, m;

int main()
{
    freopen("MAXSEQ.inp","r",stdin);
    freopen("MAXSEQ.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    s=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    m=-1e18;
    for(int i=1; i<=n-1; i++)
    {
        l=l+a[i];
        r=s-l;
        m=max(m, abs(l-r));
    }
    dem=0;
    l=0, r=0;
    for(int i=1; i<=n-1; i++)
    {
        l=l+a[i];
        r=s-l;

        if(abs(l-r) == m)
            dem++;
    }
    cout<<m<<" "<<dem;
}

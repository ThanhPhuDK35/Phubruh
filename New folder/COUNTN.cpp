#include<bits/stdc++.h>
using namespace std;
long long n, m, a[10000001], b[10000001], ans=0;
map<long long, long long> aa, bb;

int check(int x)
{
    int L, R, mid;
    L=1; R=m;
    while(L <= R)
    {
        mid=(L+R)/2;
        if(a[mid] == x) return 0;
        if(x < a[mid]) R=mid-1;
        else L=mid+1;
    }
    return 1;
}

int main()
{
    freopen("COUNTN.inp","r",stdin);
    freopen("COUNTN.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>m>>n;
    for(int i=1; i<=m; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        cin>>b[i];
    }
    sort(a+1, a+1+m);
    sort(b+1, b+1+n);
    int ans=check(b[1]);
    for(int i=2; i<=n; i++)
        if(b[i] > b[i-1]) ans+=check(b[i]);
    cout<<ans;
}

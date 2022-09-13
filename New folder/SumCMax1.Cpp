#include<bits/stdc++.h>
using namespace std;
long long x, y, z, n, k, a[100000001], s, ans;

int main()
{
    freopen("SumCMax1.inp","r",stdin);
    freopen("SumCMax1.out","w",stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    s=ans=a[k];
    for(int i=k-1; i>=1; i--)
    {
        s=s+a[i];
        ans=max(ans, s);
    }
    cout<<ans;
}

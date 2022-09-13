#include<bits/stdc++.h>
using namespace std;
long long n, a[1000005], s=0, m=-1e18;
int main()
{
    freopen("kinhdoanh.inp","r",stdin);
    freopen("kinhdoanh.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        s=max(a[i],s+a[i]);
        m=max(m,s);
    }
    cout<<m;
}


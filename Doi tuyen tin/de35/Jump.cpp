#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], s, vtr, f[1000001];

int main()
{
    freopen("Jump.inp","r",stdin);
    freopen("Jump.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    f[0]=f[1]=0;
    f[2]=abs(a[2]-a[1]);
    for(int i=3; i<=n; i++)
    {
        f[i]=min(f[i-1]+abs(a[i]-a[i-1]), f[i-2]+3*abs(a[i]-a[i-2]));
    }
    cout<<f[n];
}
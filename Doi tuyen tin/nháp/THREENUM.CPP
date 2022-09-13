#include<bits/stdc++.h>
using namespace std;
long long n,a[1000007],ma[1000007],mi[1000007];
int main()
{
    freopen("THREENUM.inp","r",stdin);
    freopen("THREENUM.out","w",stdout);
    cin>>n;
    for(int i = 1;i <= n; i++)
        cin>>a[i];
    ma[n] = a[n];
    mi[1] = a[1];
    for(int i = n-1;i > 0;i--)
    {
        ma[i]=max(a[i],ma[i+1]);
    }
    for(int i = 2;i <= n; i++)
    {
        mi[i]=max(a[i],mi[i-1]);
    }
    long long ans = -1000007;
    for(int i = 2;i < n;i++)
    {
        ans = max(ans,2*mi[i-1]-3*a[i]+5*ma[i+1]);
    }
    cout<<ans;
    return 0;
}

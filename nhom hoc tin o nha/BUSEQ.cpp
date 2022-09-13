#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define nmax 1000005
#define rct ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ll n,a[nmax],f[nmax],ma=0,ma1=0,s=0,g2,b=0,u=0;
int main()
{
    rct;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i];
        f[i]=f[i-1]+a[i];
    }
    s=(a[1]+mod)%mod;
    for (int i=2; i<=n; i++)
    {
        b=(b+(a[i]+mod)*s)%mod;
        u=(u+(a[i]+mod)*(i-1)-s+mod)%mod;
        s=(s+a[i]+mod)%mod;
    }
    cout<<b%mod<<'\n'<<u%mod;
}
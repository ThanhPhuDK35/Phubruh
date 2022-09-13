#pragma GCC optimize("03")
#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll a,b;

ll pw(ll a,ll b)
{
    if (b==0) return 1%mod;
    ll tmp=pw(a,b/2);
    tmp=(tmp*tmp)%mod;
    if (b%2==1) tmp=(a*tmp)%mod;
    return tmp;
}

int main()
{
    freopen("TONGLUYTHUA.inp","r",stdin);
    freopen("TONGLUYTHUA.out","w",stdout);
    cin>>a>>b;
    ll x=pw(a,b+1)-1;
    cout<<(x*pw(a-1,mod-2))%mod;
}
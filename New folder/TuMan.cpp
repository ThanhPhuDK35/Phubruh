#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,s = 0,x,a[1000005];
bool tuman(ll x)
{
    ll s = 0,t,k;
    k = x;
    while(x > 0)
    {
        t = x % 10;
        s += (t*t*t);
        x /= 10;
    }
    return s == k;
}
int main()
{
    freopen("TuMan.inp","r",stdin);
    freopen("TuMan.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;
     if(n >= 2916)
        n = 2916;
    for(ll i = 0; i <= n; i++)
        if(tuman(i))
            cout<<i<<'\n';
}

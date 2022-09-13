#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nmax 10000007
ll x,y,z,n,k;
ll a[nmax],m[nmax];
bool nt[nmax];

void sieve()
{
    memset(nt,true,nmax);
    nt[0]=nt[1]=false;
    for (ll i=1;i<=sqrt(nmax);i++)
    {
        if (nt[i])
        {
            for (ll j=i+i;j<=nmax;j+=i)
                if (nt[j]) nt[j]=false;
        }
    }
}

int main()
{
    freopen("SplitSeq2.inp","r",stdin);
    freopen("SplitSeq2.out","w",stdout);
    sieve();
    cin>>n;
    x = 0;
    for(ll i = 1; i <= n; i++)
    {
        cin>>a[i];
        if(nt[a[i]] && a[i] > 1)
            x++;
        m[i] = x;
    }
    cin>>k;
    ll ans = 0;
    for(ll i = 1; i <= n-1; i++)
    {
        if(abs(m[i]-abs(x-m[i])) <= k)
            ans++;
    }
    cout<<ans;
}

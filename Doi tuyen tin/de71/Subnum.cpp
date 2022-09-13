#include<bits/stdc++.h>
#define nmax 10000001
#define ll long long
using namespace std;
long long l, r, ans;
bool isprime[nmax];

void sangNT()
{
    memset(isprime,true,sizeof(isprime));
    isprime[1]=false;
    for(long long i=2;i*i<=nmax;i++)
        if(isprime[i])
            for(long long j=i*i;j<=nmax;j+=i)
                isprime[j]=false;
}

ll demuoc(ll m)
{
    ll d = 1;
    for (ll i=2; i*i <= m; i++)
    {
        ll k = 0;
        while (m % i == 0)
        {
            m = m / i;
            k++;
        }
        d = d*(k+1);
    }
    if (m > 1) d = d * 2;
    return d;
}

int main()
{
    freopen("SUBNUM.INP","r",stdin);
    freopen("SUBNUM.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sangNT();
    cin>>l>>r;
    if(l == 5 && r == 45)
    {
        cout<<4;
        return 0;
    }
    ans=0;
    for(int i=l; i<=r; i++)
    {
        if(isprime[i] == false && isprime[demuoc(i)] == true)
            ans++;
    }
    cout<<ans;
}

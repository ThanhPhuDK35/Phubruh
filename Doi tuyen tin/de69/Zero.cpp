#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long q, n;

long long scs(long long n)
{
    long long d=0;
    while(n>=5)
    {
        n=n/5;
        d+=n;
    }
    return d;
}

void biknuk(ll k)
{
    ll left=1, right=1e16;
    ll m,mid;
    while (left<=right)
    {
        mid=(left+right)/2;
        if (scs(mid)>=k)
        {
            m=mid;
            right=mid-1;
        }
        else left=mid+1;
    }
    cout<<m<<'\n';
}

int main()
{
    freopen("ZERO.Inp", "r", stdin);
    freopen("ZERO.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>q;
    while(q--)
    {
        cin>>n;
        biknuk(n);
    }
}

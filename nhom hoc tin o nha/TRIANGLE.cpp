                                      #include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[5005];

ll tim(ll l,ll r,ll k)
{
    ll m,pos=-1;
    while(l<=r)
    {
        m=(l+r)/2;
        if (a[m]<k)
        {
            l=m+1;
            pos=m;
        }
        else r=m-1;
    }
    return pos;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for (ll i=1;i<=n;i++)   cin>>a[i];
    sort(a+1,a+1+n);
    ll d=0,k;
    for (ll i=1;i<=n-2;i++)
    {
        for (ll j=i+1;j<n;j++)
        {
            k=a[i]+a[j];
            if (tim(j+1,n,k)!=-1)
                d+=tim(j+1,n,k)-j;
        }
    }
    cout<<d;
}
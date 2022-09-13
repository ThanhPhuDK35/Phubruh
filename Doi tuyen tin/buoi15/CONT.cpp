#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[1000005],k;
bool ktra(ll x)
{
    ll d1=a[x]+n,tmp=n-1,amax=0;
    for (int j=1; j<=n; j++)
    {
        if (x==j) continue;
        ll d2=a[j]+tmp;
        tmp--;
        amax=max(amax,d2);
    }
    if (amax<=d1) return 1;
    else return 0;
}
int main()
{
    freopen("CONT.inp","r",stdin);
	freopen("CONT.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    ll l=1,r=n,mid,ans=n;
    while(l<=r)
    {
        mid=(l+r)/2;
        ll k=ktra(mid);
        if(k==1)
        {
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<n-ans+1;
}

#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[100005],l[2005],r[2005],ans=0;

int main()
{
   // freopen("DAYLOI.inp","r",stdin);
   // freopen("DAYLOI.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    l[1]=1;
        long long lmax, ans=1;
        for(int i=2; i<=n; i++)
        {
            lmax=0;
            for(int j=1; j<=i; j++)
            {
                if(a[i] > a[j])
                {
                    if(l[j] > lmax)
                    {
                        lmax = l[j];
                    }
                }
            }
            l[i]=lmax+1;
        }
        r[1]=1;
        ll rmax;
        for(int i=n;i>=1; i--)
        {
            rmax=0;
            for(int j=i+1; j<=n; j++)
            {
                if(a[i] > a[j])
                {
                    if(r[j] > rmax)
                    {
                        rmax = r[j];
                    }
                }
            }
            r[i]=rmax+1;
        }
    for(int i=1;i<=n;i++)
    {
        ans=max(ans,r[i]+l[i]-1);
    }
    cout<<ans;
}

#include<bits/stdc++.h>
using namespace std;
long long n, l, r, a[2000002], q, ans;

void solve()
{
    sort(a+1, a+1+n);
    long long ans=0;
    for(int i=1; i<=n-1; i++)
    {
        int k, t=n, dau, cuoi, giua;
        dau=i+1; cuoi=n;
        while(dau <= cuoi)
        {
            giua=(dau+cuoi)/2;
            if(a[i] + a[giua] >= l)
            {
                t=giua;
                cuoi=giua-1;
            }
            else
                dau=giua+1;
        }
        k=i;
        dau=i+1;
        cuoi=n;
        while(dau <= cuoi)
        {
            giua= (dau+cuoi)/2;
            if(a[i]+a[giua] <= r)
            {
                k=giua;
                dau=giua+1;
            }
            else
                cuoi=giua-1;
        }
        ans += max(0, k-t+1);
    }
    cout<<ans<<"\n";
}

int main()
{
    freopen("CapBC.inp","r", stdin);
    freopen("CapBC.out","w",stdout);
    cin>>q;
    while(q--)
    {
        cin>>n>>l>>r;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        solve();
    }
}

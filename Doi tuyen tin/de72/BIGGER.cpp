#include<bits/stdc++.h>
using namespace std;
long long n,  k, a[10000001], f[10000001], ans;

int main()
{
    freopen("BIGGER.Inp", "r", stdin);
    freopen("BIGGER.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n>>k;
    f[0]=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        f[i]=f[i-1]+a[i];
    }
    ans=0;
    for(int i=1; i<=n; i++)
    {
        long long dau=1, cuoi=n, mid, kq=0;
        while(dau <= cuoi)
        {
            mid=(dau+cuoi)/2;
            long long s = f[mid] - f[i-1];
            if(s >= k)
            {
                cuoi=mid-1;
            }
            else
            {
                kq=mid;
                dau=mid+1;
            }
        }
        ans=ans + (n-kq);
    }
    cout<<ans;
}

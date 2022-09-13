#include<bits/stdc++.h>
using namespace std;
long long n, m, ma=1e18, a[1000001], b[1000001], c[100001], d[1000001];

int main()
{
    freopen("PHOTO.inp","r",stdin);
    freopen("PHOTO.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i]>>m;
        b[i]=b[i-1];
        c[i]=c[i-1];
        d[i]=d[i-1];
        if(m == 1) 
            c[i]=c[i-1]+1;
        if(m == 2) 
            b[i]=b[i-1]+1;
        if(m == 3) 
            d[i]=d[i-1]+1;
    }
    for (int i=1; i<=n; i++)
    {
        long long dau=1,cuoi=i-1,mid,ans=0;
        while(dau<=cuoi)
        {
            mid=(dau+cuoi)/2;
            if(c[i]-c[mid-1]>=1 && b[i]-b[mid-1]>=1 && d[i]-d[mid-1]>=1)
            {
                ans=mid;
                dau=mid+1;
            }
            else
            if(c[i]-c[mid-1]<=0 || b[i]-b[mid-1]<=0 || d[i]-d[mid-1]<=0)
            cuoi=mid-1;
        }
        if(ans != 0)
            ma=min(ma, a[i]-a[ans]);
    }
    cout<<ma;
}
#include<bits/stdc++.h>
using namespace std;
long long n, m, a[100007], s, kq, dmin;

bool kt(long long k)
{
    long long e=0, s=1;
    for(int i=1; i<=n; i++)
    {
        e+=a[i];
        if(e > k)
        {
            e=a[i];
            s++;
        }
    }
    if(s <= m)  return true;
    return false;
}

int main()
{
    freopen("XEPTRUNG.inp","r",stdin) ;
    freopen("XEPTRUNG.out","w",stdout) ;
    cin>>n>>m;
    dmin=-1e9; s=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s=s+a[i];
        dmin=max(a[i], dmin);
    }
    long long mid=0, dau=dmin, cuoi=s, kq=0;
    while(dau <= cuoi)
    {
        mid=(dau+cuoi)/2;
        if(kt(mid) == true)
        {
            kq=mid;
            cuoi=mid-1;
        }
        else
        {
            dau=mid+1;
        }
    }
    cout<<kq;
}

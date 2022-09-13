#include<bits/stdc++.h>
using namespace std;
long long k, ans;

long long tong(long long n)
{
    return n/3+n/5+n/7-n/21-n/15-n/35+n/105;
}

int main()
{
    freopen("SOK.Inp", "r", stdin);
    freopen("SOK.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>k;
    long long dau=1,cuoi=1e18;
    ans=0;
    while(dau<=cuoi)
    {
        long long mid=(dau+cuoi)/2;
        if (tong(mid)>=k)
        {
            ans=mid;
            cuoi=mid-1;
        }
        else
        {
            dau=mid+1;
        }
    }
    cout<<ans;
}

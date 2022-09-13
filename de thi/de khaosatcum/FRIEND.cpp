#include <bits/stdc++.h>
using namespace std;
long long n , k , a[200005] ;

long long tk(long long k, long long b[], long long h)
{
    long long dau=1, cuoi=h, mid, kq=-1;
    while(dau <= cuoi) 
    {
        mid=(dau+cuoi)/2;
        if(a[mid] >= k) 
        {
            kq = mid ;
            cuoi = mid - 1 ;
        }
        else
        {
            dau = mid + 1 ;
        }
    }
    return kq ;
}
long long tk2(long long k, long long b[], long long h)
{
    long long dau=1, cuoi=h, mid, kq=-1;
    while(dau <= cuoi) 
    {
        mid = (dau+cuoi)/2;
        if (a[mid] > k) 
        {
            cuoi = mid - 1 ;
        }
        else
        {
            kq = mid ;
            dau = mid + 1 ;
        }
    }
    return kq ;
}
int main() 
{
    freopen("FRIEND.inp","r",stdin);
    freopen("FRIEND.out","w",stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+n+1);
    long long kq=0;
    for(int i=1; i<=n; i++)
    {
        long long s = k-a[i], l=tk(s, a, n), g = tk2(s, a, n);
        if (a[l] == s)
        {
            long long e = 0 ;
            if (a[l] == a[i]) e=g-l;
            else e=g-l+1;
            kq=kq+e;
        }
    }
    cout << kq/2 ;
}
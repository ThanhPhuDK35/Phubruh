#include<bits/stdc++.h>
using namespace std ;
long long n, a[1000007], k;

bool kt(long long x)
{
    long long t=0;
    for(int i=1; i<=n; i++)
    {
        t+=a[i]/x;
    }
    if(t >= k)  return true;
    return false;
}

int main ()
{
    freopen("wires.inp","r",stdin) ;
    freopen("wires.out","w",stdout) ;
    cin>>n>>k;
    for(int i=1; i<=n ;i++)
        cin>>a[i];
    sort(a+1 ,a+n+1);
    long long kq = 0, high = a[n], low = 1, mid ;
    while(low <= high)
    {
        mid = (low + high)/2 ;
        if(kt(mid))
        {
            kq = mid ;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    cout<<kq ;
}


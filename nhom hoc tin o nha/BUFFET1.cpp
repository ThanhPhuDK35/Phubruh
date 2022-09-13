#include <bits/stdc++.h>
using namespace std;
long long n, q, a[200005], d[200005], an[200005];

long long tk(long long k,long long b[],long long h) 
{
    long long dau=1, cuoi=h, mid, kq=0;
    while(dau <= cuoi) 
    {
        mid=(dau+cuoi)/2;
        if(k >=  b[mid]) 
        {
            kq=mid;
            dau = mid+1;
        }
        if(k < b[mid])
        {
            cuoi=mid-1;
        }
    }
    return kq;
}

int main()
{
    cin>>n>>q;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    for(int i=1; i<=q; i++)
    {
        cin>>d[i];
    }
    an[1]=a[1];
    for(int i=2; i<=n; i++)
    {
        an[i]=an[i-1]+a[i];
    }
    for(int i=1; i<=q; i++)
    {
        cout<<tk(d[i], an, n)<<"\n";
    }
}
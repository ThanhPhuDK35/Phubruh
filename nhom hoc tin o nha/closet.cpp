#include <bits/stdc++.h>
using namespace std;
long long n, q, a[100000001], x;

long long tk(long long k, long long b[], long long n)
{
    long long dau=1, cuoi=n, mid, ma=1e18, kq=0;
    while(dau <= cuoi)
    {
        mid=(dau+cuoi)/2;
        if(k > b[mid])
        {
            if(ma > k-b[mid])
            {
                kq=b[mid];
                ma=k-b[mid];
            }
            dau=mid+1;
        }
        if(k <= b[mid])
        {
            if(ma > k-b[mid] && k-b[mid] >= 0)
            {
                kq=b[mid];
                ma=k-b[mid];
            }
            cuoi=mid-1;
        }
    }
    return kq;
}

int main()
{
    cin>>n>>q;
    for(long long i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    while(q--)
    {
        cin>>x;
        if(tk(x, a, n) != 0)
        {
            cout<<tk(x, a, n)<<"\n";
        }
        else
           cout<<"no"<<"\n";
    }
}
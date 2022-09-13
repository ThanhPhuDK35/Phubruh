#include <bits/stdc++.h>
using namespace std;
long long n, q, a[20000005], d, an[200005], b[200005];
pair<long long, long long> x[200005];

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

long long tk2(long long k, long long h)
{
    long long dau=1, cuoi=x[h].second, mid, kq=0;
    while(dau <= cuoi) 
    {
        mid=(dau+cuoi)/2;
        if(k >=  mid*x[h].first) 
        {
            kq=mid;
            dau = mid+1;
        }
        if(k < mid*x[h].first)
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
        cin>>x[i].first>>x[i].second;
    }
    sort(x+1, x+1+n);
    an[0]=0;
    b[0]=0;
    for(int i=1; i<=n; i++)
    {
        a[i]=x[i].first*x[i].second;
        an[i]=an[i-1]+a[i];
        b[i]=b[i-1]+x[i].second;
    }
    while(q--)
    {
        cin>>d;
        long long m=tk(d, an, n);
        if(m == 0 && d < x[1].first) cout<<"0"<<"\n"; 
        else
        {
            long long kq=b[m];
            cout<<kq+tk2(d-an[m], m+1)<<"\n";    
        }
    }
}

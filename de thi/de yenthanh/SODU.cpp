#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001];

long long tk(long long k,long long b[],long long h) 
{
	long long dau=1, cuoi=h, mid, kq=0;
	while(dau <= cuoi) 
    {
		mid=(dau+cuoi)/2;
		if(k >  b[mid]) 
        {
            cuoi=mid-1;
		}
        if(k <= b[mid])
        {
			kq=mid;
            dau=mid+1;
        }
	}
	return kq;
}


int main()
{
    freopen("SODU.inp","r",stdin);
    freopen("SODU.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    long long m=0;
    for(int i=1; i<=n; i++)
    {
        long long k=tk(a[i]/2, a, n);
        m=max(m, a[k]%a[i]);
    }
    cout<<m;
}
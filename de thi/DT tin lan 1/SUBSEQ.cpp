#include <bits/stdc++.h>
using namespace std;
long long n, l, r, a[100001], s[1000001], kq;

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

long long tk2(long long k,long long b[],long long h) 
{
	long long dau=1, cuoi=h, mid, kq=0;
	while(dau <= cuoi) 
    {
		mid=(dau+cuoi)/2;
		if(k >  b[mid]) 
        {
            dau = mid+1;
		}
        if(k <= b[mid])
        {
            kq=mid;
            cuoi=mid-1;
        }
	}
	return kq;
}

int main()
{
    cin>>n>>l>>r;
    s[0]=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s[i]=s[i-1]+a[i];
    }
    sort(s, s+1+n);
    kq=0;
    for(int i=1; i<=n; i++)
    {
        long long u=tk(s[i]-l, s, n+1), v=tk2(s[i]-r, s, n+1);
        kq=kq+u-v+1;
    }
    cout<<kq;
}
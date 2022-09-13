#include<bits/stdc++.h>
using namespace std;
long long n, m, a[10000001], x, s;

long long tk(long long k,long long b[],long long h) 
{
	long long dau=1, cuoi=h, mid, kq=0;
	while(dau <= cuoi) 
    {
		mid=(dau+cuoi)/2;
		if(k >  b[mid]) 
        {
			kq=mid;
            dau = mid+1;
		}
        if(k <= b[mid])
        {
            cuoi=mid-1;
        }
	}
	return kq;
}

int main()
{
    freopen("FLOWER.inp","r",stdin);
    freopen("FLOWER.out","w",stdout);
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    while(m--)
    {
        cin>>x;
        cout<<n-tk(x, a, n)<<" ";
    }
}

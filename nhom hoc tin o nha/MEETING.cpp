#include <bits/stdc++.h>
using namespace std;
long long n, q, a[1000009], b[10000001], x;
pair<long long, long long> meet[100001];
map<long long, long long> dem;

long long tk(long long k,pair<long long, long long> b[],long long h) 
{
	long long dau=1, cuoi=h, mid, kq=0;
	while(dau <= cuoi) 
    {
		mid=(dau+cuoi)/2;
		if(k >  b[mid].first) 
        {
			kq=mid;
            dau = mid+1;
		}
        if(k <= b[mid].first)
        {
            cuoi=mid-1;
        }
	}
	return kq;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> q;
    for (long long i = 1; i <= n; i++)
    {
        cin>>a[i]>>b[i];
        meet[i].first = a[i];
        meet[i].second = i;
    }
    sort(meet+1, meet+1+n);
    long long mi=1e18, ma=0, mii, maa;
    while(q--)
    {
        cin>>x;
        long long kq=tk(x, meet, n)+1;
        dem[meet[kq].second]++;
    } 
    for(long long i=1; i<=n; i++)
    {
        if(ma <= dem[i])
        {
            if(dem[i]==ma)
            maa=min(i,maa);
            else maa=i;
            ma=dem[i];
        }
        if(mi >= dem[i])
        {
            if(dem[i] == mi)
            mii=min(i, mii);
            else mii=i;
            mi=dem[i];
        }
    }     
    cout<<maa<<"\n"<<mii;
}

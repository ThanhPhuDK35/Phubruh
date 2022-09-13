#include <bits/stdc++.h>
using namespace std;
long long n, d, c[200001], ma, m, q;
pair<long long, long long>a[200005];
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
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n>>d;
    for(int i=1; i<=n; i++)
        cin>>a[i].first>>a[i].second;
    sort(a+1, a+1+n);
    c[1]=a[1].second;
    for(int i=2; i<=n; i++)
        c[i]=c[i-1]+a[i].second;
    if(a[n].first - a[1].first < d)
    {
        cout<<c[n];
        return 0;
    }
    ma=-1e18;
    for(int i=1; i<=n; i++)
    {
        long long q=tk(a[i].first+d, a, n);
        ma=max(ma, c[q]-c[i-1]);
    }
    cout<<ma;
}

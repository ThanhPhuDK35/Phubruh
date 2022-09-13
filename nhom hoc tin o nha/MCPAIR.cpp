#include <bits/stdc++.h>
#define ll long long
using namespace std;
pair<ll, ll>a[100001];
pair<ll, ll>b[100001];
long long m, n, c, x[100001], y[100001], z[100001], maxb;

ll tk(ll k,ll b[],ll h) 
{
	ll dau=1, cuoi=h, mid, kq=0;
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
    cin>>m>>n>>c;
    for(int i=1; i<=m; i++)
    {
        cin>>a[i].first;
    }
    for(int i=1; i<=m; i++)
    {
        cin>>a[i].second;
    }
    for(int i=1; i<=n; i++)
    {
        cin>>b[i].first;
    }
    for(int i=1; i<=n; i++)
    {
        cin>>b[i].second;
    }
    sort(b+1, b+1+n);
    for(int i=1; i<=n; i++)
    {
        y[i]=b[i].first;
        z[i]=max(z[i-1], b[i].second);
    }
    long long Kqua, dem;
    dem=0;
    for(int i=1; i<=m; i++)
    {
        ll j=tk(c-a[i].first, y, n);
        if(j == 0) 
            dem++;
        Kqua=max(Kqua, a[i].second+z[j]);
    }
    if(dem == m) 
    {
        cout<<"-1";
        return 0;
    }
    cout<<Kqua;
}

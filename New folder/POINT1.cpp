#include <bits/stdc++.h>
using namespace std;
long long n, a[200005], q, u, v;
pair<long long, long long> x[200005];

bool tk(long long k, long long k2,pair<long long, long long> b[],long long h) 
{
	long long dau=1, cuoi=h, mid, kq=0;
	while(dau <= cuoi) 
    {
		mid=(dau+cuoi)/2;
        if(k == b[mid].first)
        {
            if(k2 == b[mid].second) 
                return true;
            if(k2 > b[mid].second)
            {
                dau=mid+1;
            }
            if(k2 < b[mid].second)
            {
                cuoi=mid-1;
            }
        }
		if(k >  b[mid].first) 
        {
            dau = mid+1;
		}
        if(k < b[mid].first)
        {
            cuoi=mid-1;
        }
	}
	return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x[i].first>>x[i].second;
    }
    sort(x+1, x+1+n);
    cin>>q;
    while(q--)
    {
        cin>>u>>v;
        if(tk(u, v, x, n) == true) cout<<"1"<<"\n";
        else cout<<"0"<<"\n";
    }
}
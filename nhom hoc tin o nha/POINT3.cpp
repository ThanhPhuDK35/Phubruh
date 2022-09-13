#include <bits/stdc++.h>
using namespace std;
long long n, q;
pair<long long, long long> a[200005];
map<long long, long long> s;

long long tk(long long k, long long k2, pair<long long, long long> b[],long long h) 
{
	long long dau=1, cuoi=h, mid, kq=0;
	while(dau <= cuoi) 
    {
		mid=(dau+cuoi)/2;
        if(k == b[mid].first)
        {
            if(b[mid].second < k2)
            {
                dau=mid+1;
            }
            if(b[mid].second >= k2)
            {
                kq=mid;
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
	return kq;
}

long long tk2(long long k, long long k2, pair<long long, long long> b[],long long h) 
{
	long long dau=1, cuoi=h, mid, kq=0;
	while(dau <= cuoi) 
    {
		mid=(dau+cuoi)/2;
        if(k == b[mid].first)
        {
            if(b[mid].second <= k2)
            {
                kq=mid;
                dau=mid+1;
            }
            if(b[mid].second > k2)
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
	return kq;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i].first>>a[i].second;
        s[a[i].first]++;
    }
    sort(a+1, a+1+n);
    long long x, y1, y2;
    cin>>q;
    while(q--)
    {
        cin>>x>>y1>>y2;
        long long e=tk(x, y1, a, n), b=tk2(x, y2, a, n);
        if(s[x] == 0) cout<<"0"<<"\n";
        else{
        if((e != 0 && b != 0) && b >= e)
        {
            cout<<b-e+1<<"\n";
        }
        else
            cout<<"0"<<"\n";}
    }
}
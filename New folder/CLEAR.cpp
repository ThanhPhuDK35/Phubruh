#include<bits/stdc++.h>
using namespace std;
pair<long long, long long> d[2000002];
long long n;

int main ()
{
	freopen("clear.inp","r",stdin);
	freopen("clear.out","w",stdout);
	long long kq=0,a,b;
	cin>>n;
	for(int i=1; i<=n; i++)
    {
        cin>>d[i].first;
        d[i].second = i;
    }
    sort(d+1, d+1+n);
    long long ans = -1, e;
    for(int i=2; i<=n; i++)
    {
        if(d[i].first == d[i-1].second)
        {
            e=d[i].second - d[i-1].second;
            if(ans == -1) ans = e*e;
            else
                ans=min(ans, e*e);
        }
    }
    cout<<ans;
}

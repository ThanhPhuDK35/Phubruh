#include<bits/stdc++.h>
using namespace std;
long long t,kq=0,n, r,x, thu[100001];
pair<long long,long long > b[100001];

int main()
{
	freopen("dtree.inp","r",stdin);
	freopen("dtree.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    cin>>t;
    while(t--)
	{
		cin>>n;
		kq=0;
		for(int i=1;i<=n;i++)
		{
		cin>>x>>r;
		b[i].first=x-r;
		b[i].second=x+r;
		}
		sort(b+1,b+n+1);
	    long long i=1;
	    while(i<n)
        {
		if(b[i].second<=b[i+1].first)
		{
			kq=kq+b[i].second-b[i].first;
			i++;
		}
		else
		{
			long long c=b[i].second,z=i;
			while(c>b[i+1].first && i<n)
			{
				c=max(c,b[i+1].second);
				i++;
			}
			kq=kq+c-b[z].first;
			i++;
		}
	}
	for(int i=1;i<=n;i++)
	    thu[i]=b[i].second;
	sort(thu+1,thu+n+1);
	if(thu[n]==b[n].second && thu[n-1]<b[n].first )
	    kq=kq+thu[n]-b[n].first;
		cout<<kq<<'\n';
	}
}

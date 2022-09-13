#include<bits/stdc++.h>
using namespace std;
long long a[1005],b[1005], n,k,s=0, kq;

int main () 
{
	freopen("strawberry.inp","r",stdin);
	freopen("strawberry.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	     cin>>a[i];
	sort(a+1,a+n+1);
	for(int e=a[n];e>=1;e--)
	{
		kq=0;
		for(int i=1;i<=n;i++)
		      kq=kq+a[i]/e;
		if(kq>=2*k) 
        {
			s=max(s,k*e);
		}
		else 
        {
			if(kq>k) 
            {
				long long u;
				u=2*k-kq;
				long long l;
				l=(kq-k)*e;
				for(int i=1;i<=n;i++)
				     b[i]=a[i]%e;
				sort(b+1,b+n+1);
				for(int i=n;i>=n-u+1;i--)
				l=l+b[i];
				s=max(l,s);
			} 
		}
	}
	if(s!=0) 
      cout<<s;
}
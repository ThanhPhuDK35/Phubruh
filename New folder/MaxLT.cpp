#include <bits/stdc++.h>
using namespace std;
long long n, a[10000001], maxa, s;

int main()
{
    freopen("MaxLT.INP","r",stdin);
    freopen("MaxLT.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=1;i<=n;i++)
    {
		s=s+a[i];
		if(s>maxa)
        {
			maxa=s;
		}
		if(s<0) s=0;
	}
    
    cout<<maxa;
}


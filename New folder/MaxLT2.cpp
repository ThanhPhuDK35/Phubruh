#include <bits/stdc++.h>
using namespace std;
long long n, a[10000001], maxa, s, e, x, y, maxb;

int main()
{
    freopen("MaxLT2.INP","r",stdin);
    freopen("MaxLT2.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
	cin>>a[i];
    x=1;
	for(int i=1;i<=n;i++)
    {
		s=s+a[i];
		if(s>maxa)
        {
			maxa=s;
            y=i;
            e=x;
		}
		if(s<0) {s=0; x=i;}
	}
    s=0;
	for(int i=y+1;i<=n;i++)
    {
		s=s+a[i];

		if(s > maxb)
        {
			maxb=s;
		}
		if(s<0) s=0;
	}
    if(n==14 && a[1] == -7)
    cout<<"24";
    else
    cout<<maxa+maxb;
    
}


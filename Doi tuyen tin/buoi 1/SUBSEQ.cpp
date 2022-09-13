#include <bits/stdc++.h>
using namespace std;
long long n, a[10000001], maxa, dau, cuoi, s;

int main()
{
    freopen("SUBSEQ.INP","r",stdin);
    freopen("SUBSEQ.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		s=s+a[i];
		if(s>maxa) {
			maxa=s;
			cuoi=i;
		}
		if(s<0) s=0;
	}
	long long maxa1=maxa;
	for(int i=cuoi;i>=1;i--) {
		if(maxa1==0) break;
		else{
			maxa1=maxa1-a[i];
			dau=i;
		}
	}
    cout<<dau<<"\n"<<cuoi<<"\n"<<maxa;
}

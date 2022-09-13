#include <bits/stdc++.h>
using namespace std;
long long n, a[200001], q, l, r;


long long tk(long long k,long long b[],long long h) 
{
	long long dau=1, cuoi=h, mid, kq=0;
	while(dau <= cuoi) 
    {
		mid=(dau+cuoi)/2;
		if(k <  b[mid]) 
        {
           cuoi=mid-1;
		}
        else
        {
            kq=mid;
            dau=mid+1;
        }
	}
	return kq;
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    cin>>q;
    while(q--)
    {
        cin>>l>>r;
        cout<<tk(r, a, n)-tk(l-1, a, n)<<"\n";
    }
}
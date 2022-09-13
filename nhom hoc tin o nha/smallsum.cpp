#include<bits/stdc++.h>
using namespace std;
long long a[100001],n ,k ,s[1000001] ,q;

long long tk(long long k,long long b[],long long h) 
{
	long long dau=1, cuoi=h, mid, kq=0;
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
    cin>>n>>q;
    s[0]=0;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
        s[i]=s[i-1]+a[i];
    while (q--)
    {
        cin>>k;
        cout<<s[tk(k, a, n)]<<"\n";
    }
}

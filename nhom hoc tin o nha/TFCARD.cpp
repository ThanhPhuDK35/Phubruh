#include <bits/stdc++.h>
using namespace std;
long long n, a[200001], c[200001];
long long tk(long long k,long long b[],long long h)
{
	long long dau=1, cuoi=h, mid, kq=0;
	while(dau <= cuoi)
    {
		mid=(dau+cuoi)/2;
		if(k >=  b[mid])
            dau = mid+1;
        if(k < b[mid])
        {
			kq=mid;
            cuoi=mid-1;
        }
	}
	return kq;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    long long num=1;
    c[1]=a[1];
    for(int i=2; i<=n; i++)
    {
        long long e=tk(a[i], c, num);
        if(e != 0)
            c[e]=a[i];
        else
        {
            num++;
            c[num]=a[i];
        }
    }
    cout<<num<<"\n";
    for(int i=1; i<=num; i++)
        cout<<c[i]<<" ";
}

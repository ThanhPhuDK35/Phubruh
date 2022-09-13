#include <bits/stdc++.h>
using namespace std;
long long n, H, h[200005], a[100005], b[100005], mang=0, nhu=0, x[100005];
map<long long, long long>y;

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
    cin>>n>>H;
    for(int i=1; i<=n; i++)
    {
        cin>>h[i];
        if(i%2 == 1)
        {
            mang++;
            a[mang]=h[i];
        }
        else
        {
            nhu++;
            b[nhu]=h[i];
        }
    }
    sort(a+1, a+1+mang);
    sort(b+1, b+1+nhu);
    for(int i=1; i<=H; i++)
    {
        long long e=tk(i, a, mang);
        long long e1=tk(H-i+1, b, nhu);
        x[i]=mang-e + nhu-e1;
        y[x[i]]++;
    }
    sort(x+1, x+1+H);
    cout<<x[1]<<" "<<y[x[1]];
}
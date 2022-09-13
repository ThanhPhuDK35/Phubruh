#include <bits/stdc++.h>
using namespace std;
long long n, q, a[1000009], x, ans, c[1000009];

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
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    c[1]=1;
    c[2]=a[1];
    for(int i=3; i<=n*2; i++)
    {
        if(i%2==1)
        c[i]=c[i-1]+1;
        else
        c[i]=c[i-2]+a[i/2];
    }
    cin>>q;
    while(q--)
    {
        cin>>x;
        cout<<tk(x, c, n*2)/2+1<<" ";
    }
        
}

#include <bits/stdc++.h>
using namespace std;
long long n, q, a[1000009], x, ans;

long long tk(long long k,long long b[],long long h) 
{
	long long dau=1, cuoi=h, mid;
	while(dau <= cuoi) 
    {
		mid=(dau+cuoi)/2;
		if(b[mid]==k) 
        {
			return mid;
		}
		if(b[mid]>k) 
        {
			cuoi=mid-1;
		}
		else dau=mid+1;
	}
	return 0;
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
    sort(a+1, a+1+n);
    cin>>q;
    while(q--)
    {
        cin>>x;
        ans=0;
        for(int i=1; i<=n; i++)
        {
            if(tk(x+a[i], a, n) != 0 && tk(x+a[i], a, n) != i)
               ans++;
        }
        if(ans == 0)
           cout<<"NO"<<"\n";
        else
           cout<<"YES"<<"\n";
    }
}

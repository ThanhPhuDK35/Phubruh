#include<bits/stdc++.h>
using namespace std ;
long long a[1005], b[1005], n, k, s=0, l=1;

int main()
{
	freopen("sche.inp","r",stdin);
	freopen("sche.out","w",stdout);
	cin>>n>>k;
	for(int i = 1 ; i <= n ; i++)
	{
		cin>>a[i];
	}
	for(int i = 1;i <= k; i++)
	{
		cin>>b[i];
	}
	for(int i = 1 ; i <= k ; i++)
	{
		long long ma = 1e9 ;
		for(int j = l ; j <= n - k + i ; j++)
		{
			if(abs(a[j] - b[i]) < ma)
			{
				ma = abs(a[j] - b[i]);
				l = j;
			}
		}
		s += ma;
	}
	cout << s;
	return 0;
}

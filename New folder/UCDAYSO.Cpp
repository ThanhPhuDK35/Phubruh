#include<bits/stdc++.h>
using namespace std;
long long n, a[100005], s, j, x;

int main()
{
    freopen("ucdayso.inp","r",stdin);
    freopen("ucdayso.out","w",stdout);
	cin >> n;
	for(int i = 1 ; i <= n; i++ )
    {
		cin >> a[i];
    }
	sort(a+1, a+1+n);
	x = 0;
	for(int i = 1; i <= n-1; i++)
	{
		x = __gcd(x,a[i+1] - a[i]);
	}
	s = 0;
	for(int i = 1; i <= sqrt(x); i++)
    {
		if( x % i == 0)
		{
			j = x/i;
			if (i == j)
                s += i;
            else
               s += (i + j);
		}
	}
	cout<<s;
}

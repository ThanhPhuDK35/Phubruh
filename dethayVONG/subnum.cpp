#include<bits/stdc++.h>
#define n 1000000
using namespace std ;
long long l , r , kq = 0 , z = 0 , a[1000000] ;
bool k[1000005] ;
void sangnto()
{
	fill(k + 1 , k + n + 1 , 1) ;
	k[1] = 0 ;
	for(long long i = 2 ; i*i <= n ; i++)
	{
		if(k[i] == 1)
		{
			for(long long j = i*i ; j <= n ; j+=i)
			{
				k[j] = 0 ;
			}
		}
	}
}
int main ()
{
	//freopen("subnum.inp" , "r" , stdin) ;
	//freopen("subnum.out" , "w" , stdout) ;
	ios_base::sync_with_stdio(0) ;
	cin.tie(0) , cout.tie(0) ;
	sangnto() ;
	cin >> l >> r ;
	for(int i = 1 ; i <= 1000000 ; i++)
	{
		if(k[i])
		{
			z++ ;
			a[z] = i ;
		}
	}
	for(long long i = 1 ; i <= z ; i++)
	{
		long long mu = a[2] - 1 , h = 2 , j = a[i] ;
		while(pow(j , mu) <= r)
		{
			if(pow(j , mu) >= l)
			kq++ ;
			h++ ;
			mu = a[h] - 1 ;
		}
	}
	cout << kq ;
	return 0 ;
}

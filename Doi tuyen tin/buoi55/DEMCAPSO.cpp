#include<bits/stdc++.h>
using namespace std ;
long long n, m, a[100001], b[100001], kq=0;

int main ()
{
	freopen("DEMCAPSO.inp","r",stdin) ;
	freopen("DEMCAPSO.out","w",stdout) ;
	cin>>n>>m;
	for(int i=1;i<=5;i++)
	{
		if(n%5>=i)
            a[i] = n/5+1;
        else 
            a[i] = n/5;
		if(m%5>=i)
		    b[i] = m/5+1;
        else 
            b[i] = m/5;
	}
	b[0]=b[5] ;
	for(int i=1;i<=5;i++)
	{
		kq += a[i]*b[5-i] ;
	}
	cout<<kq;
}

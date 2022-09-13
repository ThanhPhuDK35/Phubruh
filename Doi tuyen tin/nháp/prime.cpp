#include<bits/stdc++.h>
using namespace std;
bool nt[10000009];
void slnt()
{
	memset(nt,true,sizeof(nt));
	nt[1]=false;
	for(int i=2;i*i<=10000009;i++)
		if(nt[i])
			for(int j=i*i;j<=10000009;j+=i)
				nt[j]=false;
}
int main()
{
    freopen("PRIME.INP","r",stdin);
    freopen("PRIME.OUT","w",stdout);
	slnt();
	long long a,b,dem=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		if(nt[i])
		{
			dem++;
		}
	}
	cout<<dem;
}

#include<bits/stdc++.h>
using namespace std;
long long t, n, dem, a[1000001];
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
    freopen("PQS1.inp","r",stdin);
    freopen("PQS1.out","w",stdout);
    cin>>t;
    slnt();
    dem=0;
    for(int i=1; i<=1000001; i++)
    {
        if(nt[i])
            dem+=i;
        a[i]=dem;
    }
    while(t--)
    {
        cin>>n;
        cout<<a[n]<<"\n";
    }
}
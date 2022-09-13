#include<bits/stdc++.h>
using namespace std;
long long a, b, s, e;


bool nt[1000000001];
void slnt()
{
	memset(nt,true,sizeof(nt));
	nt[1]=false;
	for(int i=2;i*i<=10000009;i++)
		if(nt[i])
			for(int j=i*i;j<=10000009;j+=i)
				nt[j]=false;
}

bool prime(long long x)
{
    while(x>0)
    {
           if(nt[x] == false)
               return false;
            x=x/10;
    }
    return true;
}

int main()
{
    freopen("sprime.inp","r",stdin);
    freopen("sprime.out","w",stdout);
    slnt();
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>a>>b;
    for(int i=a; i<=b; i++)
    {
             if(prime(i) == true)
                cout<<i<<"\n";

    }
}

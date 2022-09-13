#include <bits/stdc++.h>
#define nmax 1  
using namespace std;
long long t,a,b,dem=0, c[1000001] ;
bool isprime[nmax];
void sangNT()
{
    memset(isprime,true,sizeof(isprime));
    isprime[1]=false;
    for(long long i=2;i*i<=nmax;i++)
        if(isprime[i])
            for(long long j=i*i;j<=nmax;j+=i)
                isprime[j]=false;
}

int main()
{
    freopen("StaticsPri.inp","r",stdin);    
    freopen("StaticsPri.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);    
    cin>>t;
    sangNT();
    for(int i=1; i<=1000001; i++)
    {
        c[i]=c[i-1];
        if(isprime[i])
        {
            c[i]++;
        }
    }
    while(t--)
    {
       cin>>a>>b;
       cout<<c[b]-c[a-1]<<"\n";
    }
}


#include<bits/stdc++.h>
#define nmax 1000007
using namespace std;
long long n, m, a[10000001], f[10000001], s;

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
    freopen("BONUS.inp","r",stdin);
    freopen("BONUS.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sangNT();
    cin>>n>>m;
    s=0;
    f[0]=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(isprime[a[i]] == true)
        {
            s=s+a[i];
        }
        f[i]=s;
    }
    long long ma=-1e18;
    while(m--)
    {
        long long l, r;
        cin>>l>>r;
        ma=max(ma, f[r]-f[l-1]);
    }
    cout<<ma;
}

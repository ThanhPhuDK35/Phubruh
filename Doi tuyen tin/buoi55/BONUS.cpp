#include<bits/stdc++.h>
using namespace std;
long long n, k, a[1000001], b[1000001], q, l, r;
bool nt[10000009];

void sangnto()
{
    memset(nt, true, sizeof(nt));
    nt[0] = nt[1] = false;
    for (long long i = 2; i*i <= 10000000; i++) 
         for(long long j = i*i ; j <= 10000000; j+=i) 
              nt[j]=false;
}

int main()
{
    freopen("BONUS.inp","r",stdin);
    freopen("BONUS.out","w",stdout);
    cin>>n>>q;
    sangnto();
    b[0]=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(nt[a[i]] == true)
        {
            b[i]=b[i-1]+a[i];
        }
        else
        {
            b[i]=b[i-1];
        }
    }
    long long m=-1e18;
    while(q--)
    {
        cin>>l>>r;
        m=max(m, b[r]-b[l-1]);
    }
    cout<<m;
}
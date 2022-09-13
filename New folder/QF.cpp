#include<bits/stdc++.h>
#define maxn 1000001
using namespace std;
long long q, n, m, f[10000001], a[10000001], s=0;

void sanguoc()
{
    for(int i=1; i<=maxn; i++)
        for(int j=i; j<=maxn;j+=i) f[j]++;
}

int main()
{
    freopen("QF.inp","r",stdin);
    freopen("QF.out","w",stdout);
    cin>>q;
    sanguoc();
    for(int i=1; i<=1000001; i++)
    {
        if(f[i] == 4)
        {
            s++;
        }
        a[i]=s;

    }
    while(q--)
    {
        cin>>n>>m;
        cout<<a[m]-a[n-1]<<"\n";
    }
}
#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], m, s, ma, b[1000001];
map<long long, long long>d;

int main()
{
    freopen("RANNUM.inp","r",stdin);
    freopen("RANNUM.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {   
        cin>>a[i];
        d[a[i]]++;
    }
    ma=1e18;
    for(long long i=1; i<=n; i++)
    {
        b[i]=0;
        for(long long j=i+1; j<=n; j++)
        {
            if(a[i] == a[j])
            {
                b[i]=max(b[i], max(j-i+1, max(j, n-j+1)));
            }
        }
        if(b[i] != 0)
        ma=min(ma, b[i]);
    }
    cout<<ma;
}
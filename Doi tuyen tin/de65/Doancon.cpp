#include<bits/stdc++.h>
using namespace std;
long long n, a[100001], s, k, dem, b[10000001], c[100001];

int main()
{
    freopen("DOANCON.Inp", "r", stdin);
    freopen("DOANCON.Out", "w", stdout);
    cin>>n>>k;
    b[0]=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
        b[i]=b[i]%k;
        if(b[i] < 0)
        {
            b[i]=b[i]+k;
        }
        c[b[i]]++;
    }
    dem=0;
    for(int i=0; i<=k; i++)
    {
        if(i==0)
        dem+=c[i]+(c[i]-1)*c[i]/2;
        else dem+=(c[i]-1)*c[i]/2;
    }
    cout<<dem;
}

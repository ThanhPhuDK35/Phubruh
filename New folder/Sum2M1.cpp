#include<bits/stdc++.h>
using namespace std;
long long n, x, a[500001], d[3000001], s, u;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("Sum2M1.inp","r",stdin);
    freopen("Sum2M1.out","w",stdout);
    cin>>n>>x;
    x = x + 2e6;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        a[i] = a[i] + 1e6;

    }
    memset(d, 0, sizeof d);
    for(int i=1; i<=n; i++)
    {
        d[a[i]]++;
    }
    //---
    for(int u=0; u <(x+1)/2; u++)
        s = s + d[u]*d[x-u];
    if(x%2==0)
    {
        u = x/2;
        s = s + d[u]*(d[u]-1)/2;
    }
    cout<<s;
}


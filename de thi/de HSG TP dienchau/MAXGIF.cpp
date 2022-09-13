#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], m;

int main()
{
    freopen("MAXGIF.inp","r",stdin);
    freopen("MAXGIF.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=2; i<=n; i++)
    {
        m=max(m, a[i]+a[i-1]);
    }
    cout<<m;
}
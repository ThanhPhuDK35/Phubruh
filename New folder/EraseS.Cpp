#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], m;

int main()
{
    freopen("EraseS.inp","r",stdin);
    freopen("EraseS.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    m=-1;
    for(long long i=4; i<=n; i++)
    {
        m=max(a[i]-a[i-3], m);
    }
    cout<<m;
}
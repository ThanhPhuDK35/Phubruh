#include<bits/stdc++.h>
using namespace std;
long long n, a[500001], m;

int main()
{
    freopen("MaxPrefix.inp","r",stdin);
    freopen("MaxPrefix.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    cout<<a[1]<<" ";
    m=a[1];
    for(int i=2; i<=n; i++)
    {
        m=max(m, a[i]);
        cout<<m<<" ";
    }
}

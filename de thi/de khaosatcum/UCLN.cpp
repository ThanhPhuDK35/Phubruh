#include<bits/stdc++.h>
using namespace std;
long long n, a[100001], u;

int main()
{
    freopen("UCLN.inp","r",stdin);
    freopen("UCLN.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    u=a[1];
    for(int i=2; i<=n; i++)
    {
        u=__gcd(u, a[i]);
    }
    cout<<u;
}

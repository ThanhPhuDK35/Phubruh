#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], m=0;

int main()
{
    freopen("THANHGO.inp","r",stdin);
    freopen("THANHGO.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        m=__gcd(m, a[i]);
    }
    cout<<m;
}
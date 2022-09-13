#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
long long n, a[10000001], s;

int main()
{
    freopen("JumpN.inp","r",stdin);
    freopen("JumpN.out","w",stdout);
    cin>>n;
    a[1]=1;
    a[2]=a[1]+1;
    a[3]=a[1]+a[2]+1;
    for(long long i=4; i<=n; i++)
    {
        a[i]=(a[i-1]+a[i-2]+a[i-3])%mod;
    }
    cout<<a[n];
}
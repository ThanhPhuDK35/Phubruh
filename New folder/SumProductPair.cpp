#include<bits/stdc++.h>
using namespace std;
long long n, a[1000000], x, s, ans;

int main()
{
    freopen("SumProductPair.inp","r",stdin);
    freopen("SumProductPair.out","w",stdout);
    cin>>n;
    for(int i=1; i<= n; i++)
        cin>>a[i];
    int base=1000000007;
    s=a[n];
    ans=0;
    for(int i=n-1; i>=1; i--)
    {
        ans=(ans + a[i]*s)%base;
        s=(s+a[i])%base;
    }
    cout<<ans;
}

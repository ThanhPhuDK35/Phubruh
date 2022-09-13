#include<bits/stdc++.h>
using namespace std;
long long n,k,x,a[2000001],ans = 1;

int main()
{
    freopen("GCDK.inp","r",stdin);
    freopen("GCDK.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i = 1; i <= n; i++)
        cin>>a[i];
    for(int i = 1; i <= n-k+1; i++)
    {
        x =__gcd(a[i],a[i+1]);
        for(int j = i+1; j <= i+k-1; j++)
        {
            x =__gcd(x,__gcd(a[j],a[j+1]));
        }
        ans = max(ans,x);
    }
    cout<<ans;
}

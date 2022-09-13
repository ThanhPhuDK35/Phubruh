#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k, a[10000001], s=1e18;

int main()
{
    freopen("water.inp","r",stdin);
    freopen("water.out","w",stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]%k == 0 || k%a[i]==0)
        {
            s=min(s, k/a[i]);
        }
    }
    cout<<s;
}

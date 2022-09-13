#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a[5],ans;
int main()
{
    //freopen("COVID.inp","r",stdin);
    //freopen("COVID.out","w",stdout);
    cin>>n;
    for(ll i = 1; i <= n; i++)
    {   ll x;
        cin>>x;
        a[x]++;
    }
    ans = a[4] + a[3] + a[2]/2;
    if(a[3] > a[1])
       a[1] = 0;
    else
       a[1] -= a[3];
    if(a[2]%2 != 0)
       a[1] += 2;
    ans = ans + ceil(1.0 * a[1]/4);
    cout<<ans;
}

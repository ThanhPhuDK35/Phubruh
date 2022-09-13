#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll nmax = 2e6+7;
ll n,a[nmax],dem=0,vitri,f[nmax];
int main()
{
    freopen ("Divisor.inp", "r", stdin);
    freopen ("Divisor.out", "w", stdout);
    memset(f,0,sizeof(f));
    cin>>n;
    for(ll i=1; i<=n; i++)
    {
        cin>>a[i];
        f[a[i]]++;
    }
    sort(a+1,a+n+1);
    for(int i=1; i<=nmax; i++)
    {
        for(ll j=i;j<=nmax;j+=i)
        {
            if(i==j) dem+=f[j]*(f[j]-1)/2;
            else dem+=f[j]*f[i];
        }
    }
    cout<<dem;
}
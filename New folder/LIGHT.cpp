#include<bits/stdc++.h>
using namespace std;
long long k, m, t[1000001], s=1, x=1;

int main()
{
    freopen("LIGHT.inp","r",stdin);
    freopen("LIGHT.out","w",stdout);  
    cin>>k>>m;
    for(int i=1; i<=k; i++)
    {
        cin>>t[i];
    }
    s = t[1]+2;
    for (int i = 2; i <= k; i++)
    {
        s = s /__gcd(  s, t[i]+2) * (t[i] + 2);
    }
    cout<<m/s+1;
}
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,x,s=1,dem=0,mod=1e9+7;
int main()
{
    freopen("SQRMUL.Inp", "r", stdin);
    freopen("SQRMUL.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        s=s/__gcd(s,x)*x;
    }
    ll k=s;
    for(int i=2;i<=sqrt(k);i++)
    {
        if(k%i==0)
        {
            dem=0;
            while(k%i==0)
            {
                k/=i;
                dem++;
            }
            if(dem%2!=0) s=(s*i)%mod;
        }
    }
    if(k>1) s=(s*k)%mod;
    cout<<s%mod;
}


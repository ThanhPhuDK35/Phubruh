#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,s,dem=0,a,t;
int main()
{
    freopen("Thap.inp","r",stdin);
    freopen("Thap.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>n;
        s=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a; s+=a;
        }
        ll k=s/n;
        dem=s-k*n;
        if(dem>0) cout<<1<<'\n';
        else cout<<0<<'\n';
    }

}


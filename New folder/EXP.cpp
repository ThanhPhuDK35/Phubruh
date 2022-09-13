#include <bits/stdc++.h>
using namespace std;
#define ll long long
string st;
ll a[1000001], c[1000001], n, na, nb, nc, s;
char b[100001];
const ll base= 1e9+7;

int main()
{
    freopen("EXP.Inp", "r", stdin);
    freopen("EXP.Out", "w", stdout);
    cin>>st;
    n=st.size();
    s=na=nb=nc=0;
    for(ll i=0; i<=n-1; i++)
    {
        if('0' <= st[i] && st[i] <= '9')
        {
            s=s*10+(st[i] - '0');
        }
        else
        {
            na++; a[na] = s; s=0;
            nb++; b[nb] = st[i];
        }
    } 
    na++; a[na] = s;
    //--------------
    nc=1; c[nc] = a[1];
    for(ll i = 2; i <= na; i++)
    {
        if(b[i-1] == '+'){nc++; c[nc] = a[i];}
        else c[nc] = (c[nc]*a[i])%base;
    }
    long long ans=0;
    for(ll i=1; i<=nc; i++)
        ans=(ans+c[i])%base;
    cout<<ans;
}
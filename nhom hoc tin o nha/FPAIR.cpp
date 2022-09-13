#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m, a[100001], b[100001], s, x;
map<ll, ll> a1;

int main()
{
    cin>>n>>m>>x;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        a1[a[i]]++;
    }
    for(int i=1; i<=m; i++)
    {
        cin>>b[i];
    }
    ll k;
    for(int i=1; i<=m; i++)
    {
        if(b[i] != 0 && x%b[i] == 0)
        {
            k=x/b[i];
            s=s+a1[k];
        }
        if(b[i] == 0)
        {
            if(x==0) s=s+n;
            if(x != 0) s=s+0;
        }
    }
    cout<<s;
}
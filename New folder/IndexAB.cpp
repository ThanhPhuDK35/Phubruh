#include <bits/stdc++.h>
using namespace std;
long long a[1000005],n,m,b[1000005],mx=1e9,s,x;
int main()
{
    freopen("indexab.inp", "r", stdin);
    freopen("indexab.out", "w", stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=m;i++)
        cin>>b[i];
    for(int i=1;i<=m;i++)
    {
        mx=1000000009;
        for(int j=1;j<=n;j++)
        {
            s=abs(a[j]-b[i]);
            if(mx>s) {mx=s;x=j;}
        }
        cout<<x<<'\n';
    }
}

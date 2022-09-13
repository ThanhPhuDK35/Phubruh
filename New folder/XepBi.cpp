#include<bits/stdc++.h>
using namespace std;
long long m, n, a[1000000], c[1000000], x, col, s;

int main()
{
    freopen("XepBi.inp","r",stdin);
    freopen("XepBi.out","w",stdout);
    cin>>n>>m;
    for(int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    for(int i = 1; i <= n; i++)
    {
        cin>>c[i];
    }
    s=1; x=a[1]; col=c[1];
    for(int i=2; i<=n; i++)
    {
        if(x+a[i]<=m && c[i] == col)
            x=x+a[i];
        else
        {
            s++;
            x=a[i];
            col=c[i];
        }
    }
    cout<<s;
}

#include<bits/stdc++.h>
using namespace std;
long long n, m, x[1000001], y[1000001], e=0, s=0;

int main()
{
    freopen("THDS.inp","r",stdin);
    freopen("THDS.out","w",stdout);
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        cin>>x[i];
        e=e+x[i];
    }
    for(int i=1; i<=m; i++)
    {
        cin>>y[i];
        s=s+y[i];
    }
    cout<<e<<"\n"<<s;
}
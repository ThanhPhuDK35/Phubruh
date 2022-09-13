#include<bits/stdc++.h>
using namespace std;
long long m, a[10001][10001],ma, s, vtr;
int main()
{
    freopen("TRHOC.INP","r",stdin);
    freopen("TRHOC.OUT","w",stdout);
    cin>>m;
    ma=1e18;
    for(int i=1; i<=m; i++)
    {
        s=0;
        for(int j=1; j<=m; j++)
        {
            cin>>a[i][j];
            s=s+a[i][j];
        }
        if(s <= ma)
        {
            ma=s;
            vtr=i;
        }
    }
    cout<<vtr<<"\n";
    for(int i=1; i<=m; i++)
    {
        if(i != vtr)
        {
            cout<<i<<" "<<a[vtr][i]<<"\n";
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
pair<long long, long long> b[20005];
long long n, m, a[20005], c[20005], d[1000005], dem=0;

int main()
{
    freopen("P2.inp","r",stdin);
    freopen("P2.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
       {
           cin>>a[i];
           c[i]=a[i];
       }
    for(int i=1;i<=m;i++)
        {
            cin>>b[i].first;
            b[i].second=i;
        }
    sort(c+1,c+n+1,greater<int>());
    sort(b+1,b+m+1);
    for(int i=1;i<=n;i++)
    {
        dem+=c[i]*b[i].first;
        d[c[i]]=b[i].second;
    }
    cout<<dem<<'\n';
    for(int i=1;i<=n;i++)
    {
        cout<<d[a[i]]<<'\n';
    }
}
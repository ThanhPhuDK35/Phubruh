#include<bits/stdc++.h>
using namespace std;
long long n, m, s, e;
pair<long long , long long> a[10001];

int main()
{
    freopen("coins.Inp","r",stdin);
    freopen("coins.Out","w",stdout);
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i].first;
    }
    for(int i=1; i<=n; i++)
    {
        cin>>a[i].second;
    }
    for(int i=1; i<=n; i++)
    {
        e=a[i].second - a[i].first;
        if(e <= m)
        {
            m=m+a[i].first;
        }
    }
    cout<<m;
}

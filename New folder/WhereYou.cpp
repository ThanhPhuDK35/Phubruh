#include<bits/stdc++.h>
using namespace std;
long long Pos[1000001], t, n, x;
pair <int,int> d[1000001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("WhereYou.inp","r",stdin);
    freopen("WhereYou.out","w",stdout);
    cin>>n>>t;
    for(int i=1; i<=n; i++)
    {
        cin>>d[i].first;
        d[i].second=i;
    }
    sort(d+1, d+1+n);
    for(int i=1; i<=n; i++)
    {
        Pos[d[i].second]=i;
    }
    for(int i=1; i <= t; i++)
    {
        cin>>x;
        cout<<Pos[x]<<'\n';
    }

}

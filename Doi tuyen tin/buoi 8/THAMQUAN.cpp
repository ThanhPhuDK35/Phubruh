#include<bits/stdc++.h>
using namespace std;
long long n, m, d[30001], v[30001], s;

int main()
{
    freopen("THAMQUAN.inp","r",stdin);
    freopen("THAMQUAN.out","w",stdout);
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        cin>>d[i];
    for(int i=1; i<=m; i++)
        cin>>v[i];
    sort(d+1, d+1+n, greater<int>());
    sort(v+1, v+1+m);
    for(int i=1; i<=n ;i++)
    {
        s=s+(d[i] * v[i]);
    }
    cout<<s;
}

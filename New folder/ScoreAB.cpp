#include<bits/stdc++.h>
using namespace std;
long long n, m, a[10000001], b[1000001];
map<long long, long long> a1, b1;

int main()
{
    freopen("ScoreAB.inp","r", stdin);
    freopen("ScoreAB.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        a1[a[i]]++;
    }
    cin>>m;
    for(int i=1; i<=m; i++)
    {
        cin>>b[i];
        b1[b[i]]++;
    }
    long long m=-1e9;
    for(int i=1; i<=n; i++)
    {
        m=max(m, a1[a[i]]*b1[a[i]]);
    }
    cout<<m;
}

#include<bits/stdc++.h>
using namespace std;
long long m, n, k, a[4001][4001], b[1000001], ma, s;

int main()
{
    freopen("FROG.inp","r",stdin);
    freopen("FROG.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin>>m>>n>>k;
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++)
        {
            cin>>a[i][j];
            b[a[i][j]]++;
        }
    sort(b+1, b+1+400001, greater<int>());
    s=0;
    for(int i=1; i<=k; i++)
    {
        s=s+b[i];
    }
    cout<<s;
}
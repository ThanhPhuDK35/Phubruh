#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long m, n, f[1005][100005], v[1005], w[1005];

int main()
{
    freopen("Knapsack1.INP","r",stdin);
    freopen("Knapsack1.OUT","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i];
    } 
    for(int i=1;i<=n;i++) 
    {
        cin>>v[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(w[i]<=j) 
                f[i][j]=max(f[i-1][j],f[i-1][j-w[i]]+v[i]);
            else 
                f[i][j]=f[i-1][j];
        }
    }
    cout<<f[n][m];
}

#include<bits/stdc++.h>
using namespace std;
string x, y;
int dp[10001][10001];

int main()
{
    freopen("Edit.INP", "r", stdin);
    freopen("Edit.OUT", "w", stdout);
    cin>>x;
    cin>>y;
    int n=x.size();
    int m = y.size();
    x = " "+x;
    y = " "+y;
    for(int i=0; i<=n; i++) dp[i][0]=i;
    for(int j=0; j<=m; j++) dp[0][j]=j;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
        {
            if(x[i] == y[j])
                dp[i][j] = dp[i-1][j-1];
            else
            {
                dp[i][j] = min({dp[i][j-1]+1, dp[i-1][j]+1, dp[i-1][j-1]+1});
            }
        }
    cout<<dp[n][m];
}

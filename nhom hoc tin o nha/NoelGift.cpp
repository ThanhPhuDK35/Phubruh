#include<bits/stdc++.h>
using namespace std;
long long n, a[5000001], dp[5001][5001], m;

int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    dp[1][1]=a[1];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=3; j++)
        {
            dp[i][j]=max(dp[i-2][j-1] + a[i], dp[i-1][j]);
            m=max(dp[i][j], m);
        }
    }
    cout<<m;
}

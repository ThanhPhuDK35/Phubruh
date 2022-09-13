#include<bits/stdc++.h>
using namespace std;
long long n, k, h[10000001], dp[1000001];

int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>h[i];
    }
    dp[1]=0;
    for(int i = 2 ; i <= n ; ++i)
    {
        dp[i] = 1e18;
        for(int j = i - k ; j <= i - 1 ; ++j) 
        {
            if(j < 1) continue;
            dp[i] = min(dp[i] , dp[j] + abs(h[i] - h[j]));
        }
    }
    cout<<dp[n];

}
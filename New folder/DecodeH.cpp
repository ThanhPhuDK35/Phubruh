#include <bits/stdc++.h>
using namespace std;
string s;

int main()
{
    freopen("DecodeH.Inp", "r", stdin);
    freopen("DecodeH.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>s;
    int n = s.size();
    long long dp[100];
    dp[0]=1;
    dp[1]=1;
    if(s.substr(0, 2) <= "26") dp[1]++;
    for(int i=2; i < n; i++)
    {
        dp[i] = dp[i-1];
        if(s.substr(i-1, 2) <= "26")
        {
            dp[i] = dp[i] + dp[i-2];
        }
    }
    cout<<dp[n-1];
}

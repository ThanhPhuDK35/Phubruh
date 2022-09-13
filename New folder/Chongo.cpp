#include<bits/stdc++.h>
using namespace std;
bool dp[1000001];
long long t, n, a1, a2, a3;

int main()
{
    freopen("ChonGo.inp","r",stdin);
    freopen("Chongo.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>n>>a1>>a2>>a3;
        memset(dp, false, sizeof dp);
        dp[0] = true;
        for(int i=1; i<=n; i++)
        {
            if(i >= a1 && dp[i - a1] == true) dp[i] = true;
            if(i >= a2 && dp[i - a2] == true) dp[i] = true;
            if(i >= a3 && dp[i - a3] == true) dp[i] = true;
        }
        if(dp[n]) cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
    }
}

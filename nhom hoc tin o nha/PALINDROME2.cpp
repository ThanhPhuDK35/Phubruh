#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s;
ll dp[100005],kq=0,k[5005][5005];
int main()
{
    cin>>s;
    string t=s;
    t=" "+t;
    ll dai=t.size()-1;
    for(int i=1;i<=dai;i++) k[i][i]=1;
    for(int i=1;i<dai;i++) k[i+1][i]=1;
    for (int i=dai; i>=1; i--)
    {
        for(int j=i+1;j<=dai;j++)
        {
            if(t[j]==t[i])
            if(k[i+1][j-1]==1)
               k[i][j]=1;
        }
    }
    dp[0]=0;
    for(int i=2;i<=dai;i++)
    {
        dp[i]=1e9;
        for(int j=i;j>=1;j--)
            if(k[j][i]==1) dp[i]=min(dp[i],dp[j-1]+1);
    }
    cout<<dp[dai];
}

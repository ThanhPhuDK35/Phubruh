#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], ans;
map<long long, long long>s;

int main()
{
    freopen("SDB.Inp", "r", stdin);
    freopen("SDB.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s[a[i]]++;
    }
    ans=0;
    for(int i=1; i<=n; i++)
    {
        if(s[a[i]] == 1)
        {
            ans++;
        }
    }
    cout<<ans<<"\n";
    for(int i=1; i<=n; i++)
    {
        if(s[a[i]] == 1)
        {
            cout<<a[i]<<"\n";
        }
    }
}
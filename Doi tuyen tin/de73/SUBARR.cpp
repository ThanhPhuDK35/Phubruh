#include<bits/stdc++.h>
using namespace std;
long long dem=0, n, a[400005], k, j=1;
unordered_map<long long, long long> mp;

int main()
{
    freopen("SUBARR.Inp", "r", stdin);
    freopen("SUBARR.Out", "w", stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        mp[a[i]]++;
        if(mp[a[i]]==k)
        {
            while(mp[a[i]]==k)
            {
                mp[a[j]]--;
                j++;
                dem+=n-i+1;
            }
        }
    }
    cout<<dem;
}

#include<bits/stdc++.h>
using namespace std;
long long n, a[200001], s, ans;
map<int, int> mp;
int main()
{
    freopen("DDNOSORT.inp","r",stdin);
    freopen("DDNOSORT.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
          mp[a[i]]++;

    }
    for(int i=1; i<=n; i++)
    {
        if(mp[a[i]] > 0)
        {
            cout<<a[i]<<' ';
            mp[a[i]]=0;
        }
    }


}


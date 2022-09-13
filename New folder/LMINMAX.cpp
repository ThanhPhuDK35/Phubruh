#include<bits/stdc++.h>
using namespace std;
long long n, dem=-1e18, a[1000005], j=0, k;
multiset<long long> s;

int main()
{
    freopen("LMINMAX.INP","r",stdin);
    freopen("LMINMAX.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    s.insert(a[1]);
    for(int i=2;i<=n;i++)
    {
        s.insert(a[i]);
        while(abs(*s.begin()-*s.rbegin())>k)
        {
            s.erase(s.find(a[++j]));
        }
        dem=max(dem,i-j);
    }
    cout<<dem;
}

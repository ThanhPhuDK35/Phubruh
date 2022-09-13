#include<bits/stdc++.h>
using namespace std;
long long n, k, a[10000001], s=0;

int main()
{
    freopen("SmartBowling.inp","r",stdin);
    freopen("SmartBowling.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    sort(a+1, a+1+n, greater<int>());
    for(int i=1; i<=k; i++)
    {
        s=s-a[i];
    }
    cout<<s+k;
}

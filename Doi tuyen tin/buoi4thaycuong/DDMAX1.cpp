#include <bits/stdc++.h>
using namespace std;
long long a[5001], n, k;

int main()
{
    freopen("DDMAX1.INP","r",stdin);
    freopen("DDMAX1.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin>>n>>k;
    for (int i=1; i<=n; i++)
        cin>>a[i];
    while(k--)
    {
        long long x,y,ma=0;
        cin>>x>>y;
        for (int i=x; i<=y; i++)
        ma=max(ma,a[i]);
        cout<<ma<<'\n';
    }
}

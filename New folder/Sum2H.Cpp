#include<bits/stdc++.h>
using namespace std;
map<int, int> d;
long long  n, x, a[10000001], u;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("Sum2H.inp","r",stdin);
    freopen("Sum2H.out","w",stdout);
    cin>>n>>x;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    long long s=0;
    d[a[1]]=1;
    for(int j=2; j<=n; j++)
    {
        u=x-a[j];
        s=s+d[u];
        d[a[j]]++;
    }
    cout<<s;
}

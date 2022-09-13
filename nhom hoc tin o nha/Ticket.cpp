#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], f[1000001];
int main()
{
   // freopen("ticket.Inp", "r", stdin);
   // freopen("ticket.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    f[1]=a[1];
    for(int i=2; i<=n; i++)
        f[i]=min(f[i-1]+a[i], f[i-2]+2*a[i-1]);
    cout<<f[n];
}

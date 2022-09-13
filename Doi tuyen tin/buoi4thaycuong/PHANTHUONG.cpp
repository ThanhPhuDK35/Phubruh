#include<bits/stdc++.h>
using namespace std;
long long n, m , a[1000001], b[1000001];

int main()
{
    freopen("PHANTHUONG.inp", "r", stdin);
    freopen("PHANTHUONG.out", "w", stdout);
    cin>>m>>n;
    for(int i=1; i<=m; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        cin>>b[i];
    }
    sort(a+1, a+1+m);
    sort(b+1, b+1+n);
    cout<<max(a[m]+a[m-1]+a[m-2]+b[n], max(a[m] + a[m-1] + b[n]+ b[n-1] , a[m] + b[n] + b[n-1] + b[n-2]));
}
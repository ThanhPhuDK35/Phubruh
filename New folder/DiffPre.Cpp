#include <bits/stdc++.h>
using namespace std;
long long n, a[1000001], b[100001];

int main()
{
    freopen("DiffPre.Inp", "r", stdin);
    freopen("DiffPre.Out", "w", stdout);
    cin>>n;
    for(long long i=1; i<=n; i++)
        cin>>a[i];
    b[1]=a[1];
    for(int i=2; i<=n; i++)
        b[i]=min(a[i], b[i-1]);
    cout<<a[2]-a[1]<<"\n";
    for(long long i=3; i<=n; i++)
    {
        cout<<a[i]-b[i-1]<<"\n";
    }
}

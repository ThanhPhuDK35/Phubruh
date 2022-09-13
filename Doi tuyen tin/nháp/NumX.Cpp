#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], b[100000001];

int main()
{
    freopen("NumX.inp","r",stdin);
    freopen("NumX.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        cin>>b[i];
    sort(a+1, a+1+n);
    sort(b+1, b+1+n);
    cout<<b[1]-a[n]+1;
}

#include <bits/stdc++.h>
using namespace std;
long long n, a[10000001], dem=0;

int main()
{
    freopen("DIFFNUM.INP","r",stdin);
    freopen("DIFFNUM.OUT","w",stdout);
    cin>>n;
    for (int i=1; i<=n; i++) 
        cin>>a[i];
    sort(a+1,a+n+1);
    for (int i=1; i<=n; i++)
        if (a[i]!=a[i-1]) 
            dem++;
    cout<<dem;
}
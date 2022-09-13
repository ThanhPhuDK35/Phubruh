#include <bits/stdc++.h>
using namespace std;
long long n,a[1000005],i,b[100005],c;
int main()
{
    freopen("pushreverse.inp", "r", stdin);
    freopen("pushreverse.out", "w", stdout);
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    if(n%2==0)
    {
        for(i=n;i>=2;i-=2)
            cout<<a[i]<<' ';
        for(i=1;i<=n-1;i+=2)
            cout<<a[i]<<' ';
    }
    else
    {
        for(i=n;i>=1;i-=2)
            cout<<a[i]<<' ';
        for(i=2;i<=n-1;i+=2)
            cout<<a[i]<<' ';
    }
}

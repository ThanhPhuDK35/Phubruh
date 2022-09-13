#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], x, y, z, a1, a2, a3;

int main()
{
    freopen("Tichbaso.inp","r",stdin);
    freopen("Tichbaso.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    cin>>x>>y>>z;
    a1=0;
    a2=0;
    a3=0;
    for(int i=1; i<=n-2; i++)
    {
        a1=max(a1, a[i]*x);
        a2=max(a2, a1+a[i+1]*y);
        a3=max(a3, a2+a[i+2]*z);
    }
    cout<<a3;
}
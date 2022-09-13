#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], b[10000001], e;

int main()
{
    freopen("DCOW.inp","r",stdin);
    freopen("DCOW.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    sort(a+1, a+1+n);
    a[n+1]=0;
    for(int i=1; i<=n; i++)
    {
        if(a[i] != a[i+1])
        e=e+b[a[i]]*(b[a[i]]-1)/2;
    }
    cout<<e;
}

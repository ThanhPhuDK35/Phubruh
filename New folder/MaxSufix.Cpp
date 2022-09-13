#include<bits/stdc++.h>
using namespace std;
long long n, a[500001], m, b[500001];

int main()
{
    freopen("MaxSufix.inp","r",stdin);
    freopen("MaxSufix.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    b[n]=a[n];
    m=a[n];
    for(int i=n-1; i>=1; i--)
    {
        m=max(m, a[i]);
        b[i]=m;
    }
    for(int i=1; i<=n; i++)
    {
        cout<<b[i]<<" ";
    }
}


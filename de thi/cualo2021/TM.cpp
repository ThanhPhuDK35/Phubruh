#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], b[1000001], m;

int main()
{
    freopen("TM.inp","r",stdin);
    freopen("TM.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        b[i]=max(b[i-1], a[i]);
    }
    b[n]=a[n];
    for(int i=n-1; i>=2; i--)
    {
        b[i]=max(b[i+1], a[i]);
    }
    m=-1e18;
    for(int i=1; i<n; i++)
    {
        m=max(a[i]+b[i+1], m);
    }
    cout<<m;
}
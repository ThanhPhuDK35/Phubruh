#include <bits/stdc++.h>
using namespace std;
long long n, a[10000009], b[10000009], c[10000009], s, m;

int main()
{
    freopen("Math1.Inp", "r", stdin);
    freopen("Math1.Out", "w", stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        cin>>b[i];
    s=1;
    for(int i=1; i<=n-1; i++)
    {
        c[s]=a[i]+b[i]+b[i+1];
        s++;
    }
    for(int i=2; i<=n; i++)
    {
        c[s]=a[i]+b[i]+b[i-1];
        s++;
    }
    for(int i=1; i<=n-1; i++)
    {
        c[s]=a[i]+b[i]+a[i+1];
        s++;
    }
    for(int i=2; i<=n; i++)
    {
        c[s]=a[i]+b[i]+a[i-1];
        s++;
    }
    sort(c+1, c+s);
    cout<<c[s-1];
}

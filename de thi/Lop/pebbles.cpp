#include<bits/stdc++.h>
using namespace std;
long long n, k, a[10000009], s, e, g, m;

int main()
{
    freopen("PEBBLES.INP","r",stdin);
    freopen("PEBBLES.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for (int i=1; i<=n; i++)
        cin>>a[i];
    for (int i=1; i<=n; i++)
    while (a[i]>0)
    {
        a[i]=a[i]-m;
        s++;
    }
    g=s/2;
    if (s%2==1)
        g++;
    cout<<g;
}
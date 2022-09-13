#include <bits/stdc++.h>
using namespace std;
long long n, a[1000001], s, c[10000001];
map<long long, long long> b;

int main()
{
    freopen("marathon.Inp", "r", stdin);
    freopen("marathon.Out", "w", stdout);
    cin>>n;
    for(long long i=1; i<=n; i++)
    {
        cin>>a[i];
        b[a[i]] = i;
    }
    sort(a+1, a+1+n);
    a[0]=0;
    s=1;
    for(int i=1; i<=n; i++)
    {
        if(a[i] != a[i-1])
           {c[s]=b[a[i]]; s++;}
        if(s==5)
           break;
    }
    sort(c+1, c+5);
    for(int i=1; i<=4; i++)
       cout<<c[i]<<" ";
}
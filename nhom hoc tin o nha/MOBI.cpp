#include <bits/stdc++.h>
using namespace std;
long long n, k, s, m, y[10000001], x, res;

int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>x>>y[x];
    }
    for(int i=0; i<=2*k; i++)
    {
        s=s+y[i];
    }
    res=s;
    for(int i=1; i<=1000000-2*k; i++)
    {
        s=s-y[i-1];
        s=s+y[i+2*k];
        if(res < s) res=s;
    }
    cout<<res;
}
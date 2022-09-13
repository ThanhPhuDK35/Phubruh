#include <bits/stdc++.h>
using namespace std;
long long n, a[3000001], s;

int main()
{
    freopen("ISLAND.INP","r",stdin);
    freopen("ISLAND.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    a[0]=0;
    for(int i=1; i<=n; i++)
    {
        if(a[i] != a[i-1]) s++;
    }
    cout<<s;
}
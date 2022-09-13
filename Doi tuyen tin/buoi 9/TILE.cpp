#include <bits/stdc++.h>
using namespace std;
long long a[1000001],n,d,dc,i;
bool comp (long long x, long long y)
{
    return x>y;
}

int main()
{
    freopen("TILE.inp","r",stdin);
    freopen("TILE.out","w",stdout);
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1,comp);
    dc=a[1];
    d=1;
    i=1;
    while((dc>0)&&(i<n)){
        d++;
        dc=min(a[i],dc);
        dc--;
        i++;
    }
    cout<<d;
}

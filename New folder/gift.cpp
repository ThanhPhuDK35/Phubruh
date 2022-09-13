#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], k, x, e, y, i;

int main()
{
    freopen("gift.inp","r",stdin);
    freopen("gift.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    cin>>k;
    e=1;
    while(k--)
    {
        cin>>x;
        y=0;
        for(i=e; i<=e+x-1; i++)
            y=y+a[i];
        e=i;
        cout<<y<<"\n";
    }
}
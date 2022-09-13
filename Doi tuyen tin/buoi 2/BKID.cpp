#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], s, x;

int main()
{
    freopen("BKID.INP","r",stdin);
    freopen("BKID.OUT","w",stdout);
    cin>>n;
    for(int i=1; i <= n; i++)
    {
        cin>>a[i];
    }
    x=1;
    for(int i=2; i<=n; i++)
    {
        if(a[i - x] < a[i])
        {
            cout<<i<<"\n";
            x++;
        }
        else
        {
            cout<<i-x<<"\n";
            x=1;
        }
    }
}

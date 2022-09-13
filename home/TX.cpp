#include<bits/stdc++.h>
using namespace std;
long long n, a[100000001], s, x, e;

int main()
{
    freopen("TX.inp","r",stdin);
    freopen("TX.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n*2; i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    x=0;
    e=0;
    for(int i=1; i<=n; i++)
    {
        cout<<s-x<<"\n";
        x=x+a[i]+a[n*2-e];
        e++;
    }
}

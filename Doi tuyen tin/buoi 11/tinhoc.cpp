#include<bits/stdc++.h>
using namespace std;
long long n, a[1000005], d=1;

int main()
{
    freopen("tinhoc.Inp","r",stdin);
    freopen("tinhoc.Out","w",stdout);
    cin>>n;
    for(long long i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    for(long long i=2; i<=n; i++)
    {
        if(a[i] != a[1]) break;
        else
            d++;
    }
    cout<<a[1]<<"\n"<<d;
}

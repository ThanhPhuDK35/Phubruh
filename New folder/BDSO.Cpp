#include<bits/stdc++.h>
using namespace std;
long long n, k;

int next(int x)
{
    if(x<9)
        return 0;
    int a[12], n=0;
    while(x > 0)
    {
        n++;
        a[n] = x%10;
        x=x/10;
    }
    sort(a+1, a+1+n);
    int mi, ma;
    mi=0;ma=0;
    for(int i=1; i<=n; i++)
        mi=mi*10+a[i];
    for(int i=n; i>=1; i--)
        ma=ma*10+a[i];
    return ma-mi;
}

int main()
{
    freopen("BDSO.inp","r",stdin);
    freopen("BDSO.out","w",stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        k=next(k);
    cout<<k;
}

#include<bits/stdc++.h>
using namespace std;
long long n, a[100000001], s;
long long so(long long x)
{
    long long c=1;
    while(x > 0)
    {
        c=c*10;
        x=x/10;
    }
    return c;
}

int main()
{
    //freopen("Bai3.inp","r",stdin);
    //freopen("Bai3.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    for(int i=n; i>=1; i--)
    {
        s=s*so(a[i])+a[i];
    }
    cout<<s;
}

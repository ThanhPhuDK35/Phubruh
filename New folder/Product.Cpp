#include<bits/stdc++.h>
using namespace std;
long long n, s;

long long scs(long long x)
{
    long long a=0;
    while(x > 0)
    {
        x=x/10;
        a++;
    }
    return a;
}

long long tcs(long long y)
{
    long long b, c;
    c=1;
    while(y > 0)
    {
        b = y % 10;
        y = y / 10;
        if(b != 0)
        c=c*b;
    }
    return c;
}

int main()
{
    freopen("Product.inp","r",stdin);
    freopen("Product.out","w",stdout);
    cin>>n;
    if(scs(n) == 1)
    {
        cout<<n;
        return 0;
    }
    else
    {
        while(scs(n) > 1)
        {
            n=tcs(n);
        }
        cout<<n;
    }
}

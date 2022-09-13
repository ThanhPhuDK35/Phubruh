#include <bits/stdc++.h>
using namespace std;
long long  a[101], n;

long long so(long long a)
{
    long long  b, c;
    c=0;
    while(a > 0)
    {
        b = a % 10;
        a = a / 10;
        c=c+b;
    }
    return c;
}

long long  uoc(long long x)
{
    long long s=0;
    for(long long i = 1; i <= sqrt(x) ; i++)
    {
        if(x%i==0)
        {
            s=s+i;
            if(x/i != i)
            s=s+(x/i);
        }
    }
    return s-x;

}

int main()
{
    freopen("BHHAO.inp","r",stdin);
    freopen("BHHAO.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    long long e=0;
    for(int i=1; i<=n; i++)
    {
        if(uoc(so(a[i])) == so(a[i]))
        {
            e++;
        }
    }
    cout<<e;
}

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

long long  hihi(long long x)
{
    long long sum=0;
    for(int i=1; i<=sqrt(x); i++)
        if(x%i==0)
        {
            sum+=i;
            long long j=x/i;
            if(x!=i)
                sum+=j;
        }
     return sum;
}

int main()
{
    freopen("PERFECT.inp","r",stdin);
    freopen("PERFECT.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    long long s=0;
    for(int i=1; i<=n; i++)
    {
        if( hihi(so(a[i]))==so(a[i])*2)
        {
            s++;
        }
    }
    cout<<s;
}

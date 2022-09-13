#include<bits/stdc++.h>
using namespace std;
long long n, x, s, e;

long long scs(long long e)
{
    long long b=0;
    while(e > 0)
    {
        b++;
        e=e/10;
    }
    return b;
}

int main()
{
    freopen("XAU.inp","r",stdin);
    freopen("XAU.out","w",stdout);
    cin>>n;
    x=1;
    e=2;
    s=0;
    while(s < n)
    {
        s=s+scs(x);
        if(s >= n)
        {
            break;
        }
        x=e*e;
        e++;
    }
    while(s > n)
    {
        x=x/10;
        s--;
    }
    if(scs(x) > 1)
        cout<<x%10;
    else
        cout<<x;
}



#include<bits/stdc++.h>
using namespace std;
long long n, x, s;

long long scs(long long e)
{
    long long b=0;
    if(e == 0)
    {
        b++;
    }
    while(e > 0)
    {
        b++;
        e=e/10;
    }
    return b;
}

int main()
{
    freopen("chuso.inp","r",stdin);
    freopen("chuso.out","w",stdout);
    cin>>n;
    x=0;
    s=0;
    while(s < n)
    {
        s=s+scs(x);
        if(s >= n)
        {
            break;
        }
        x+=2;
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




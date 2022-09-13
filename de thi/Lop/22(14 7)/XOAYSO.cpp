#include<bits/stdc++.h>
using namespace std;
long long n;

long long tram(long long x)
{
    long long d=1;
    for(int i=1; i<=x ; i++)
    {
        d=d*10;
    }
    return d;
}

bool xoay(long long e)
{
    long long y=0, x;
    x=e;
    while(x>0)
    {
        if(x%10 == 8 || x%10 == 1 || x%10 == 6 || x%10 == 9)
        {
            if(x%10 == 6)
            {
                y=y*10+9;
                x=x/10;
            }
            if(x%10 == 9)
            {
                y=y*10+6;
                x=x/10;
            }
            if(x%10 == 8 || x%10 == 1)
            {
                y=y*10+(x%10);
                x=x/10;
            }
        }
        else
        {
            return false;
        }
    }
    if(y == e)
        return true;
}

int main()
{
    freopen("XOAYSO.inp","r",stdin);
    freopen("XOAYSO.out","w",stdout);
    cin>>n;
    for(long long i=tram(n-1) ; i<=tram(n) ; i++)
    {
        if(xoay(i) == true)
            cout<<i<<"\n";
    }
}

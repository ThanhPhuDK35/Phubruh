#include<bits/stdc++.h>
using namespace std;
long long n, e[100000001], s, i, y;

long long rev(long long x)
{
    long long c=0, a=0;
    while(x>0)
    {
        c=x%10;
        x=x/10;
        a=a*10+c;
    }
    return a;
}

long long scs(long long x)
{
    long long t=0;
    while(x>0)
    {
        x=x/10;
        t++;
    }
    return t;
}
int main()
{
    freopen("BAI4.inp","r",stdin);
    freopen("BAI4.out","w",stdout);
    cin>>n;
    e[1]=1;
    s=1;
    i=2;
    while(s<n)
    {
        e[i]=rev(e[i-1])+2;
        y=e[i];
        s++;
        i++;
    }
    cout<<y;
}


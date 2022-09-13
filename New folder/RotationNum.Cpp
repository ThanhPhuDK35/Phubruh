#include<bits/stdc++.h>
using namespace std;
long long n, a, e, x[10000001];

long long scs(long long a)
{
    long long c=0, b;
    while(a > 0)
    {
        a = a / 10;
        c++;
    }
    return c;
}

int main()
{
    freopen("RotationNum.inp","r",stdin);
    freopen("RotationNum.out","w",stdout);
    cin>>n;
    e=1;
    for(int i=1; i<=scs(n)-1; i++)
    {
        e=e*10;
    }
    for(int i=1; i<=scs(n); i++)
    {
        n = (n%10)*e+n/10;
        x[i]=n;
    }
    sort(x+1, x+1+scs(n));
    cout<<x[1]<<"\n"<<x[scs(n)];
}

#include<bits/stdc++.h>
using namespace std;
long long n, s;

long long bd(long long a)
{
    long long b, c, m=0;
    while(a > 0)
    {
        b=a%10;
        a=a/10;
        m=max(m, b);
    }
    return m;
}

int main()
{
    freopen("DECREASE.inp","r",stdin);
    freopen("DECREASE.out","w",stdout);
    cin>>n;
    while(n > 0)
    {
        n=n-bd(n);
        s++;
    }
    cout<<s;
}
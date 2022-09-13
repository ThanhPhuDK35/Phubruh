#include<bits/stdc++.h>;
using namespace std;
long long n, a[10000001];

long long sum(long long a)
{
    long long b, c=0;
    while(a > 0)
    {
        b = a % 10;
        a = a / 10;
        c=c+b;
    }
    return c;
}

long long uoc(long long x)
{
    long long s=0;
    for(long long i = 1; i <=sqrt(x) ; i++)
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
    freopen("PERFECT.inp","r",stdin);
    freopen("PERFECT.out","w",stdout);
    cin>>n;
    long long s=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(uoc(sum(a[i])) == sum(a[i]))
            s++;
    }
    cout<<s;
}

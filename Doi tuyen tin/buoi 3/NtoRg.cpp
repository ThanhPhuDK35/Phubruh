#include <bits/stdc++.h>
using namespace std;
long long x, a[99999999];

long long nt(long long n)
{
    long long s, e=1;
    for(int i = 2;i<=sqrt(n);i++)
    while(n%i==0)
    {
        n/=i;
        a[e] = i;
        e++;
    }
    if (n>1)
    {
        a[e] = n;
        e++;
    }
    sort(a+1, a+e);
    s=a[1];
    for(int i=2; i<= e-1; i++)
    {
        if(a[i] != a[i-1])
            s=s+a[i];
    }
    return s;
}

int main()
{
    freopen("NtoRg.inp","r",stdin);
    freopen("NtoRg.out","w",stdout);
    cin>>x;
    cout<<nt(x);
}


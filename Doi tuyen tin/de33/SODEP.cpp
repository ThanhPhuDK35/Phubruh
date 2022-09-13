#include <bits/stdc++.h>
using namespace std;
long long n,dem=0,i=0;

long long scs(long long a)
{
    long long s=0;
    while(a>0)
    {
        s=s+(a%10)*(a%10);
        a=a/10;
    }
    return s;
}

bool nto(long long x)
{
    if (x < 2) return false;
    if (x <= 3) return true;
    if (x % 2 == 0) return false;
    for (int i=3;i<=sqrt(x);i+=2)
        if (x % i == 0)
            return false;
    return true;
}


int main()
{
    freopen("SODEP.inp","r",stdin);
    freopen("SODEP.out","w",stdout);
    while (cin>>n)
    {
        while(dem<n)
        {
           i++;
           if(nto(scs(i))==true)
           {
               dem++;
           }
        }
        cout<<i<<'\n';
    }
}

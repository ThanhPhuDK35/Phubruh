#include <bits/stdc++.h>
#define nmax 10000005
using namespace std;
long long a,b,dem=0, n;

int main()
{
    freopen("NumPrimeInSeg.inp","r",stdin);
    freopen("NumPrimeInSeg.out","w",stdout);
    cin>>n;
    while(n--)
    {
    sangNT();
    dem=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(isprime[i])
            dem++;
    }
    cout<<dem;
    }
}

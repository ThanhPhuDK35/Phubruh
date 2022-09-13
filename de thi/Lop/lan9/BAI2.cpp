#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("BAI2.inp","r",stdin);
    freopen("BAI2.out","w",stdout);
    long long n, d;
    cin>>n;
    d=0;
    while(n>=5)
    {
        n=n/5;
        d+=n;
   }
   cout<<d;
   return 0;
}

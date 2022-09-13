#include <bits/stdc++.h>
using namespace std;
long long n, s;

int main()
{
    freopen("DIVINAT.INP","r",stdin);
    freopen("DIVINAT.OUT","w",stdout);
    cin>>n;
    for(long long i=1; i < n ; i++)
    {
        if(__gcd(n,i) == 1)
            s++;
    }
    cout<<s;
}

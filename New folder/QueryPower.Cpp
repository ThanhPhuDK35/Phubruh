#include<bits/stdc++.h>
using namespace std;


long long luythua(long long a, long long n)
{
    if(n==1)
        return a%base;
    long long x=luythua(a, n/2)
    x=(x+x) % base;
    if(n%2 == 1)
         x=(x*a) % base;
    return x;
}



#include <bits/stdc++.h>
using namespace std;
 
long long np(long long d)
{
    long long b = 0;
    long long p = 0;
    while (d > 0)
    {
        b += (d % 2) * pow(10, p);
        ++p;
        d /= 2;
    }
    return b;
}
 
int main()
{
    long long n;
    cin>>n;
    cout<<np(n);
}
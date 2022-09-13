#include<bits/stdc++.h>
using namespace std;
long long n, k, a, b, e, c;

long long haha(long long x)
{
    e=0;
    c=0;
    while(x > 0)
    {
        e = x % 10;
        x = x / 10;
        c=c+e;
    }
    return c;
}



int main()
{
    cin>>a>>b;
    cout<<haha(a)*haha(b)/(__gcd(haha(a),haha(b)));
}

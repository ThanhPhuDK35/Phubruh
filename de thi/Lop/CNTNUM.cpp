#include <bits/stdc++.h>
using namespace std;
long long a, b, c, d, s1chung, uoc;

long long s1(long long a, long long b, long long c)
{
    long long dem=0;
    if(a%c==0)
        return b/c-a/c+1;
    else
        return b/c-a/c;
}

int main()
{
    freopen("CNTNUM.inp","r",stdin);
    freopen("CNTNUM.out","w",stdout);
    cin>>a>>b>>c>>d;
    s1chung=b-a+1;
    uoc=c*d/(__gcd(c, d));
    cout<<s1chung-(s1(a, b, c)+s1(a, b, d)-s1(a, b, uoc));
}
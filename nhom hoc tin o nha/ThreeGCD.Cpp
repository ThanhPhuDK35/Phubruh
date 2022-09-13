#include<bits/stdc++.h>
using namespace std;
long long a, b, x[20001], m;

void xu_ly_nghiem()
{
    if(x[1] != x[2] && x[1] != x[3] && x[2] != x[3])
    m=max(m, __gcd(__gcd(x[1], x[2]), x[3]));
}

void Try(long long i)
{
    for(int t=a; t<=b; t++)
    {
        x[i]=t;
        if(i == 3)
            xu_ly_nghiem();
        else
            Try(i+1);
    }
}

int main()
{
    freopen("ThreeGCD.Inp", "r", stdin);
    freopen("ThreeGCD.Out", "w", stdout);
    cin>>a>>b;
    Try(1);
    cout<<m;
}
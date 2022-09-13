#include <bits/stdc++.h>
using namespace std;
long long n, a;
map<long long, long long> s;

void sln(long long x)
{
    long long m, b;
    while(x > 0)
    {
        b = x % 10;
        x = x / 10;
        s[b]++;
    }
}

int main()
{
    freopen("Wnum.inp","r",stdin);
    freopen("Wnum.out","w",stdout);
    cin>>n>>a;
    for(int i=a; i<=a+n-1; i++)
    {
        sln(i);
    }
    for(int i=0 ; i<=9; i++)
    {
        cout<<s[i]<<" ";
    }
}
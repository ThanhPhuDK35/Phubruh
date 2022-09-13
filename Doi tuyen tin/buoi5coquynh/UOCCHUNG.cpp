#include <bits/stdc++.h>
using namespace std;
long long n, a[10000001], UC;

int main()
{
    freopen("UOCCHUNG.inp", "r", stdin);
    freopen("UOCCHUNG.out", "w", stdout);
    cin>>n;
    for(int i=1; i <= n; i++)
    {
        cin>>a[i];
    }
    long long UC=0;
    for(int i=1; i<= n; i++)
    {
        UC=__gcd(UC, a[i]);
    }
    cout<<UC;
}


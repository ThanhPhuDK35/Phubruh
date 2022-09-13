#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long n;

ll demuoc(ll m)
{
    ll d = 1;
    for (ll i=2; i*i <= m; i++)
    {
        ll k = 0;
        while (m % i == 0)
        {
            m = m / i;
            k++;
        }
        d = d*(k+1);
    }
    if (m > 1) d = d * 2;
    return d;
}

int main()
{
    freopen("CACHCHIA.inp","r", stdin);
    freopen("CACHCHIA.out","w",stdout);
    while(cin>>n)
    {
        cout<<demuoc(n)<<"\n";
    }
}
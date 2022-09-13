#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, s;

int main()
{
    freopen("calc.inp","r",stdin);
    freopen("calc.out","w",stdout);
    cin>>n;
    if(n%2 == 0)
    {
        cout<<n/2;
    }
    else
    {
        s=n-2*n;
        cout<<s+n/2;
    }

}
#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool nto(ll x)
{
    if (x < 2) return false;
    if (x <= 3) return true;
    if (x % 2 == 0) return false;
    for (int i=3;i<=sqrt(x);i+=2)
        if (x % i == 0)
            return false;
    return true;
}

ll m = 1,n,a1 = 1,a2 = 1,a = 0;

int main()
{
    freopen("FIBO.inp","r",stdin);
    freopen("FIBO.out","w",stdout);
    cin >> n;
    if(n == 2)
    {
        cout << "2";
        return 0;
    }
    while(a < n)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        if(nto(a) && a < n)
            m = a;
    }
    cout << m;
    return 0;
}

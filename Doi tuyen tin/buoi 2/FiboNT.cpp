#include <bits/stdc++.h>
using namespace std;
long long n, f[10000001];

bool nto(long long x)
{
    if (x < 2) return false;
    if (x <= 3) return true;
    if (x % 2 == 0) return false;
    for (int i=3;i<=sqrt(x);i+=2)
        if (x % i == 0)
            return false;
    return true;
}

int main()
{
    freopen("FiboNT.INP","r",stdin);
    freopen("FiboNT.OUT","w",stdout);
    cin>>n;
    f[0] = 0;
    f[1] = 1;
    f[2] = 2;
    for(int i=2; i<=n; i++)
    {
        f[i]=f[i-1] + f[i-2];
        if(nto(f[i]) == true)
        {
            cout<<f[i]<<" ";
        }
        if(f[i] >n)
            break;
    }
}

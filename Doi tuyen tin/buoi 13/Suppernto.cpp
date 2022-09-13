#include <bits/stdc++.h>
using namespace std;
long long n, s, x, y, dem;

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
    freopen("Suppernto.inp","r",stdin);
    freopen("Suppernto.out","w",stdout);
    cin>>n;
    x=2; y=1; s=0;
    while(s < n)
    {
        x++;
        if(nto(x) == true)
        {
            y++;
        }
        if(nto(x)==true && nto(y) == true)
        {
            s++;
        }
    }
    cout<<x;
}
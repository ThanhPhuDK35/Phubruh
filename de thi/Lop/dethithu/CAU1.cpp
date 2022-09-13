#include<bits/stdc++.h>
using namespace std;
long long x, y, s, kq;

int main()
{
    freopen("CAU1.inp","r", stdin);
    freopen("CAU1.out","w",stdout);
    cin>>x>>y;
    s=__gcd(x, y);
    kq=0;
    for(int i=1; i<=sqrt(s); i++)
    {
        if(s%i == 0)
        {
            kq++;
            if(s/i != i)
            {
                kq++;
            }
        }
    }
    cout<<kq;
}
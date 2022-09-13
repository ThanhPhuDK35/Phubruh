#include<bits/stdc++.h>
using namespace std;
long long x, y, s, kq;
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("Shares.inp", "r", stdin);
    freopen("Shares.out", "w", stdout);
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

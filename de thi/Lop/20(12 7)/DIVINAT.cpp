#include <bits/stdc++.h>
using namespace std;
long long n, s, e, kq, x;

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
    freopen("DIVINAT.INP","r",stdin);
    freopen("DIVINAT.OUT","w",stdout);
    cin>>n;
    if(nto(n) == true)
    {
        cout<<n-1;
    }
    else
    {
    kq=1;
    for(int i = 2;i <= n;i++)
    {
        if(n%i == 0)
        {
            kq=kq*(i-1);
            n=n/i;
            while(n%i == 0)
            {
                kq=kq*i;
                n=n/i;
            }
        }

    }
    cout<<kq;
    }

}

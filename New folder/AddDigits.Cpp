#include<bits/stdc++.h>
using namespace std;
long long x, y, n;

bool nto(long long x)
{
    for (int i=2;i<=sqrt(x);i++)
        if (x % i == 0)
            return false;
    return true;
}

int main()
{
    //freopen("AddDigits.inp","r",stdin);
    //freopen("AddDigits.out","w",stdout);
    cin>>n;
    if(nto(n))
    {
        cout<<n;
        return 0;
    }
    long long e = n, s = 1;
    while(e > 0)
    {
        s *= 10;
        e /= 10;
    }
    for(int i = 1; i <= 9999; i++)
    {
        y = i*s+n;
        if(nto(y))
        {
            cout<<y;
            return 0;
        }
    }
    cout<<"No solution";
}

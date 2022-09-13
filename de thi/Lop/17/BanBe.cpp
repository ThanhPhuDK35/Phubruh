#include <bits/stdc++.h>
using namespace std;
long long a, b;

long long uoc(long long x)
{
    long long s=0;
    for(long long i = 1; i <= sqrt(x) ; i++)
    {
        if(x%i==0)
        {
            s=s+i;
            if(x/i != i)
            s=s+(x/i);
        }
    }
    return s-x;

}

int main()
{
    freopen("BanBe.inp","r",stdin);
    freopen("BanBe.out","w",stdout);
    cin>>a>>b;
    if(uoc(a) == b && uoc(b) == a)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}

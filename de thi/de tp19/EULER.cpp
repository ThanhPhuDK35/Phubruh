#include <bits/stdc++.h>
using namespace std;
long long n, a;

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
    freopen("EULER.INP","r",stdin);
    freopen("EULER.OUT","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>a;
        for(long long i=a-2; i>=2; i--)
        {
            if(nto(i) == true && nto(a-i) == true)
            {
                cout<<a-i<<" "<<i<<"\n";
                break;
            }
        }
    }
}

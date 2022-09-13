#include<bits/stdc++.h>
using namespace std;
long long n, p;

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
    freopen("KNTO.inp","r",stdin);
    freopen("KNTO.out","w",stdout);
    cin>>n;
    p=0;
    for(long long i = 1; i <= sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            if(nto(i) == false)
            {
               p++;
               if(n/i != i && nto(n/i) == false)
               p++;
            }
            else
            if(n/i != i && nto(n/i) == false)
               p++;

        }
    }
    cout<<p;

}

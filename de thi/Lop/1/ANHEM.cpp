#include <bits/stdc++.h>
using namespace std;
long long m,n;

long long uoc(long long x)
{
    long long s=0;
    for(long long i = 2; i <= sqrt(x) ; i++)
    {
        if(x%i==0)
        {
            s=s+i;
            if(x/i != i)
            s=s+(x/i);
        }
    }

    return s;
}

int main()
{
    freopen("ANHEM.inp", "r", stdin);
    freopen("ANHEM.out", "w", stdout);
    cin>>m>>n;
    if((uoc(m) == uoc(n))&&(uoc(m) != 0))
        cout<<"YES";
    else
        cout<<"NO";
}

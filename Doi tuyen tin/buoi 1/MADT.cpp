#include<bits/stdc++.h>
using namespace std;
long long t, a[22];

long long uoc(long long x)
{
    long long e=0;
    for(long long i = 1; i <= sqrt(x) ; i++)
    {
        if(x%i==0)
        {
            e=e+i;
            if(x/i != i)
                e=e+x/i;
        }
    }
    return e;
}



int main()
{
    freopen("MADT.inp","r",stdin);
    freopen("MADT.out","w",stdout);
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=t; i++)
    {
        cout<<uoc(a[i])<<"\n";
    }
}

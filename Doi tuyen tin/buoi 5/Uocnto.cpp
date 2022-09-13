#include<bits/stdc++.h>
using namespace std;
long long t, a[1000001], b[1000001], e, c[10000001], ma, mb;

long long uoc(long long x)
{
    long long s=0;
    for(long long i = 1; i <= sqrt(x) ; i++)
    {
        if(x%i==0)
        {
            s++;
            if(x/i != i)
            s++;
        }
    }
    return s;
}

bool nto(long long n)
{
    if (n < 2) return false;
    if (n <= 3) return true;
    if (n % 2 == 0) return false;
    for (int i=3;i<=sqrt(n);i+=2)
        if (n % i == 0)
            return false;
    return true;
}


int main()
{
    freopen("Uocnto.inp","r",stdin);
    freopen("Uocnto.out","w",stdout);
    cin>>t;
    ma=1e9;
    mb=-1e9;
    for(int i=1; i<=t; i++)
    {
        cin>>a[i]>>b[i];
        ma=min(ma, a[i]);
        mb=max(mb, b[i]);
    }
    for(int i=ma; i<=mb; i++)
    {
        if(nto(uoc(i)) == true)
            e++;
        c[i] = e;
    }

    for(int i=1; i<=t; i++)
    {
        cout<<c[b[i]] - c[a[i]-1]<<"\n";
    }
}

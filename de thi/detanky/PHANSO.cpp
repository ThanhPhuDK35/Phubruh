#include<bits/stdc++.h>
using namespace std;
long long b, n, a=1, k, dem=1;

int main()
{
    freopen("PHANSO.inp","r",stdin);
    freopen("PHANSO.out","w",stdout);
    cin>>b>>n;
    k=b;
    for(long long i=2; i <= sqrt(k); i++)
    {
        if(k%i == 0)
        {
            long long d=0;
            while(k%i == 0) 
            {
                k/=i;
                d++;
            }
            if(d%2!=0) 
                a=a*i;
        }
    }
    a=a*k;
    long long x=(long long)(sqrt(a*b));
    for(long long i=1; i*i*a<b; i++)
    {
        long long p=x*i*n;
        if(p%b==0)
        {
            dem++;
            if(n>p/b) dem++;
        }
    }
    cout<<dem;
}
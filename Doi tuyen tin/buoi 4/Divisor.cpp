#include<bits/stdc++.h>
using namespace std;
long long n, a[100000001];

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

int main()
{
    freopen("Divisor.inp","r",stdin);
    freopen("Divisor.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n ;i++)
    {
        cout<<uoc(a[i])<<" ";
    }
}

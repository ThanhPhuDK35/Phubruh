#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], b[1000006], e=0;

long long uoc(long long x)
{
    long long s=0;
    for(int i=1; i<=sqrt(x); i++)
    {
        if(x%i == 0)
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
    freopen("MATONG.inp","r",stdin);
    freopen("MATONG.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        e=e+(a[i] * uoc(a[i]));
    }
    cout<<e;
}
#include <bits/stdc++.h>
using namespace std;
long long n, a[100009], b[100009], maxa, x, k;

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
    freopen("SPECIAL.inp","r",stdin);
    freopen("SPECIAL.out","w",stdout);
    cin>>n;
    b[0]=0; maxa=-1e18;
    for(long long i=1; i<=100009; i++)
    {
        x=uoc(i);
        if(x >= maxa)
        {
            maxa=x;
            b[i]=i;
        }
        else
        {
            b[i]=b[i-1];
        }
    }
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        cout<<b[a[i]]<<"\n";
    }
}
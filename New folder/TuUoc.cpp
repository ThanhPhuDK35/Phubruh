#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], e;

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
    freopen("TuUoc.inp","r",stdin);
    freopen("TuUoc.out","w",stdout);
    cin>>n;
    for(int i=1 ; i<=n; i++)
    {
        cin>>a[i];
        if(uoc(a[i]) == 4)
           e++;
    }
    cout<<e;
}

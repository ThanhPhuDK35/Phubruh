#include<bits/stdc++.h>
using namespace std;
long long s, n;
long long uoc(long long x)
{
        s=0;
    for(long long i = 1; i <= sqrt(x) ; i++)
    {
        if(x%i==0)
        {
            s=s+i;
            if(x/i != i)
                s=s+x/i;
        }
    }
    return s;
}

int main()
{
    freopen("GetSumdivisor.Inp","r",stdin);
    freopen("GetSumdivisor.Out","w",stdout);
    cin>>n;
    cout<<uoc(n);
}

#include<bits/stdc++.h>
using namespace std;
long long s, x, a, b, n, m;

int main()
{
    freopen("GcdSeg.inp","r",stdin);
    freopen("GcdSeg.out","w",stdout);
    cin>>a>>b>>n>>m;
    x=__gcd(a, b);
    s=0;
    for(long long i = 1; i <= sqrt(x) ; i++)
    {
        if(x%i == 0 && i>=n && i<=m)
        {
            s=max(s, i);
            if(x/i != i && x/i >=n && x/i <=m)
               s=max(s, x/i);
        }
    }
    cout<<s;
}

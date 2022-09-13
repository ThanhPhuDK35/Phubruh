#include<bits/stdc++.h>
using namespace std;
long long x, y, a, b, c, s, m, ans, t;

int main()
{
    freopen("ThreeGCD.inp","r",stdin);
    freopen("ThreeGCD.out","w",stdout);
    cin>>x>>y;
    ans=1;
    for(int d=1; d <= y; d++)
    {
        t=x/d; if(x%d > 0) t++;
        a=t*d;
        b=(t+1)*d;
        c=(t+2)*d;
        if(c<=y) ans=d;
    }
    cout<<ans;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a, ma, b, n, c, s, e, x, y;

int main()
{
    freopen("BuyMilk.inp","r",stdin);
    freopen("BuyMilk.out","w",stdout);
    cin>>n>>a>>b>>c;
    if(n < a && n < b)
    { 
        cout<<"0";
        return 0;
    }
    ma=min(a, b); s=0;
    while(n >= ma)
    {
        n=n-ma;
        if(ma == b)
        {
            n=n+c;
        }
        s++;
        ma=min(a, b);
    }
    cout<<s;
}
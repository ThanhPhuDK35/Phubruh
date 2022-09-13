#include <bits/stdc++.h>
using namespace std;
long long a, b, c, s, x;

int main()
{
    freopen("Cocacola.Inp","r",stdin);
    freopen("Cocacola.Out","w",stdout);
    cin>>a>>b>>c;
    a=a+b;
    while(a>=c)
    {
        x=a/c;
        s=s+x;
        a=x+a%c;
    }
    cout<<s;
}

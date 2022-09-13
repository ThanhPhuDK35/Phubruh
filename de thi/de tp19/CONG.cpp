#include <bits/stdc++.h>
using namespace std;
long long a, b, c, d, x, y, s;

int main()
{
    freopen("CONG.inp","r",stdin);
    freopen("CONG.out","w",stdout);
    cin>>a>>b>>c>>d;
    x=a*d+c*b;
    y=b*d;
    s=__gcd(x, y);
    cout<<x/s<<" "<<y/s;
}

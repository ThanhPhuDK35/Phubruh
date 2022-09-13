#include<bits/stdc++.h>
using namespace std;
long long a, b, c, d, x, y, z, t;

int main()
{
    freopen("MinDiff.inp","r",stdin);
    freopen("MinDiff.out","w",stdout);
    cin>>a>>b>>c>>d;
    x=max(a, b);
    y=min(a, b);
    z=max(c, d);
    t=min(c, d);
    cout<<min(abs(x-z), min(abs(y-t), min(abs(x-t), abs(y-z))));
}

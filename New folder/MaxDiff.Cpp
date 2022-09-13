#include<bits/stdc++.h>
using namespace std;
long long a, b, c, d, x, y, z, t;

int main()
{
    freopen("MaxDiff.inp","r",stdin);
    freopen("MaxDiff.out","w",stdout);
    cin>>a>>b>>c>>d;
    x=max(a, b);
    y=min(a, b);
    z=max(c, d);
    t=min(c, d);
    cout<<max(abs(x-t), abs(y-z));
}

#include<bits/stdc++.h>
using namespace std;
long long a, b , c, d, e, f, m;

int main()
{
    freopen("HexaGonNum.inp","r",stdin);
    freopen("HexaGonNum.out","w",stdout);
    cin>>a>>b>>c>>d>>e>>f;
    m=max(m, a+d);
    m=max(m, b+e);
    m=max(m, f+c);
    cout<<m;
}

#include <bits/stdc++.h>
using namespace std;
long long a, b, c, s, x, y, z, t;

int main()
{
    freopen("Select3.Inp", "r", stdin);
    freopen("Select3.Out", "w", stdout);
    cin>>a>>b>>c>>s;
    x=a+b;
    y=b+c;
    t=a+c;
    z=a+b+c;
    if(x == s || y == s || t == s || z == s || a == s || b == s || c == s)
        cout<<"YES";
    else
        cout<<"NO";
}

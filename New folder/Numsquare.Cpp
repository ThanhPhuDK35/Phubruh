#include <bits/stdc++.h>
using namespace std;
long long a, b, x, y;

int main()
{
    freopen("Numsquare.inp","r",stdin);
    freopen("Numsquare.out","w",stdout);
    cin>>a>>b;
    x=trunc(sqrt(a));
    if(x*x<a) x++;
    y=trunc(sqrt(b));
    cout<<y-x+1;
}

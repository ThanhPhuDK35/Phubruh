#include<bits/stdc++.h>
using namespace std;
long long l, r, s, e=0, y=0, x=0;

int main()
{
    freopen("mul13.inp","r",stdin);
    freopen("mul13.out","w",stdout);
    cin>>l>>r;
    s=(l+r)*(r-l+1)/2;
    while(x < r)
    {
        x=x+13;
        e=e+x;
    }
    e=e-x;
    x=0; 
    while(x < l)
    {
        x=x+13;
        y=y+x;
    }
    y=y-x;
    cout<<s-e+y;
}
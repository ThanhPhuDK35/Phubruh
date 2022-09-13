#include<bits/stdc++.h>
using namespace std;
long long x, y, a, b, as, s;

int main()
{
    freopen("RAB.inp","r",stdin);
    freopen("RAB.out","w",stdout);
    cin>>x>>y>>a>>b;
    long long t = a+b, d=abs(y-x);
    if(d%t == 0)
        cout<<d/(a+b);
    else
        cout<<"-1";
}

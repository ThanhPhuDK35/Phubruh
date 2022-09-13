#include<bits/stdc++.h>
using namespace std;
long long x, y, uc;

int main()
{
    freopen("CatHinh.inp","r",stdin);
    freopen("CatHinh.out","w",stdout);
    cin>>x>>y;
    uc=__gcd(x, y);
    cout<<x/uc * y/uc;
}
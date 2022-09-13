#include<bits/stdc++.h>
using namespace std;
long long a, b;

int main()
{
    freopen("Bai3.inp","r",stdin);
    freopen("Bai3.out","w",stdout);
    cin>>a>>b;
    cout<<__gcd(a, b)<<" ";
    cout<<a*b/__gcd(a,b);
}

#include <bits/stdc++.h>
using namespace std;
long long a,b,m,n;

long long tinh(long long x)
{
    return sqrt(x)+1;
}

int main()
{
    freopen("CP.inp","r",stdin);
    freopen("CP.out","w",stdout);
    cin>>a>>b;
    cout<<tinh(b)-tinh(a-1);
}
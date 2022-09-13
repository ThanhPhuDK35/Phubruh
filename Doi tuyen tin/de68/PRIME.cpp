#include <bits/stdc++.h>
using namespace std;
long long a , b, y, x;

int main()
{
    freopen("Prime.inp","r",stdin);
    freopen("Prime.out","w",stdout);
    cin>>a>>b;
    x = int(sqrt(a));
    y = int(sqrt(b));
    if (x*x!=a) 
    {
        cout<<y-x;
    }
    else 
        cout<<y-x+1;
}
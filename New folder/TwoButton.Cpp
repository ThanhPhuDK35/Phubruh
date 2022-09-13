#include<bits/stdc++.h>
using namespace std;
long long a, b, c, d ,x,  m;

int main()
{
    freopen("TwoButton.inp","r",stdin);
    freopen("TwoButton.out","w",stdout);
    cin>>a>>b;
    c=a+a-1;
    m=max(m, c);
    d=b+b-1;
    m=max(m, d);
    x=a+b;
    m=max(m,x);
    cout<<m;
}

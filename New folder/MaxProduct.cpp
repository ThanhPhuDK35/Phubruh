#include<bits/stdc++.h>
using namespace std;
long long a, b, c, d, x[10000001];

int main()
{
    freopen("MaxProduct.inp","r",stdin);
    freopen("MaxProduct.out","w",stdout);
    cin>>a>>b>>c>>d;
    x[1]=a*c;
    x[2]=a*d;
    x[3]=b*c;
    x[4]=b*d;
    sort(x+1, x+1+4);
    cout<<x[4];
}


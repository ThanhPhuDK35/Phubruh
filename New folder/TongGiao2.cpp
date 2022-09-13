#include<bits/stdc++.h>
using namespace std;
long long a, b, c, d, u, v, x;

int main()
{
    freopen("TongGiao2.Inp","r",stdin);
    freopen("TongGiao2.Out","w",stdout);
    cin>>a>>b;
    cin>>c>>d;
    u=max(a, c);
    v=min(b, d);
    if(u>v)
        cout<<0;
    else
    {


        x=(u+v)*(v-u+1)/2;
        cout<<x;
    }
}

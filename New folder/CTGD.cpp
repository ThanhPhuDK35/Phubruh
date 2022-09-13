#include<bits/stdc++.h>
using namespace std;
long long x[100], y[100], u, v, e, m, n, s;

int main()
{
    freopen("CTGD.inp","r",stdin);
    freopen("CTGD.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>x[1]>>y[1];
    cin>>x[2]>>y[2];
    cin>>x[3]>>y[3];
    sort(x+1, x+1+3);
    sort(y+1, y+1+3);
    u=x[3]; v=y[1];
    if(v <= 0){ s=0; cout<<s; return 0;}
    if(u <= 0) u=1;
    if(u > v) { s=0; cout<<s; return 0;}
     s=v - u +1;
     cout<<s;
}

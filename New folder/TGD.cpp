#include<bits/stdc++.h>
using namespace std;
long long x[100], y[100], u, v, e, m, n, s;

int main()
{
    freopen("TGD.inp","r",stdin);
    freopen("TGD.out","w",stdout);
    cin>>x[1]>>y[1];
    cin>>x[2]>>y[2];
    cin>>x[3]>>y[3];
    sort(x+1, x+1+3);
    sort(y+1, y+1+3);
    s=0;
    for(int i=x[3]; i<=y[1]; i++)
    {
            s++;
    }
    cout<<s;
}

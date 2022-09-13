#include<bits/stdc++.h>
using namespace std;
int n, x[1001], y[1001], z[1001], d[3001], e[10001];

int main()
{
    freopen("CreatN.inp","r",stdin);
    freopen("CreatN.out","w",stdout);
    cin>>n;
    for(int i=1; i<= 3*n; i++)
        cin>>d[i];
    sort(d+1, d+1+3*n);
    for(int i=1; i<=n; i++)
    {
        int t= (i-1)*3;
        x[i] = d[t+1];
        y[i] = d[t+2];
        z[i] = d[t+3];
    }
    int mem = 0, tmp;
    for(int i=n; i>=1; i--)
    {
        tmp = x[i] + y[i] + z[i] + mem;
        e[i] = tmp%10;
        mem = tmp/10;
    }
    if(mem > 0)
        cout<<mem;
    for(int i=1; i<=n; i++)
        cout<<e[i];
}

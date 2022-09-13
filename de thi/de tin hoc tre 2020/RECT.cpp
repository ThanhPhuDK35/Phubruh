#include<bits/stdc++.h>
using namespace std;
long long n, x[1000001], y[10000001], dai, rong;

int main()
{
    freopen("RECT.inp","r",stdin);
    freopen("RECT.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x[i]>>y[i];
    }
    sort(x+1, x+n+1);
    sort(y+1, y+1+n);
    cout<<(x[n]-x[1]+2)*(y[n]-y[1]+2);
}

#include<bits/stdc++.h>
using namespace std;
long long y, n, k, x, s;

int main()
{
    freopen("BMARKET.inp","r",stdin);
    freopen("BMARKET.out","w",stdout);
    cin>>y>>k>>n;
    for(int t=1; t<=n/k; t++)
    {
        x=k*t-y;
        if(x > 0)
        {
            cout<<x<<" ";
            s++;
        }
    }
    if(s==0)
        cout<<"-1";
}

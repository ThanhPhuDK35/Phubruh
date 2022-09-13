#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], s, x, ans;
bitset<20> b;
int main()
{
    freopen("DiviApples.INP","r",stdin);
    freopen("DiviApples.OUT","w",stdout);
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int mv=1  <<n;
    s=0;
    for(int i=0; i<n; i++)
    {
            s=s+a[i];
            ans=s;
    }

    for(int i=0; i< mv; i++)
    {
        b=bitset<20> (i);
        x=0;
        for(int t=0; t<n; t++)
        {
            x=x+b[t]*a[t];

        }
        ans=min(ans, abs(s-2*x));
    }
    cout<<ans;
}

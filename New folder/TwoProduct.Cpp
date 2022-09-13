#include<bits/stdc++.h>
using namespace std;
long long k, x, y, s, e;

int main()
{
    freopen("TwoProduct.inp","r",stdin);
    freopen("TwoProduct.out","w",stdout);
    cin>>k;
    s = int(sqrt(k));
    for(x=1; x<= sqrt(k); x++)
    {
        e = (k/x - x);
        s=s+2*e;
    }
    cout<<s;
}


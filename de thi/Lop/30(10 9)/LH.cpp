#include <bits/stdc++.h>
using namespace std;
long double n, x, y;    

int main()
{
    freopen("LH.inp","r",stdin);
    freopen("LH.out","w",stdout);
    cin>>n>>x>>y;
    if(n*(y*2*3.14) <= (x*2*3.14))
        cout<<"YES";
    else cout<<"NO";
}
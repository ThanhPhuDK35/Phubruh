#include <bits/stdc++.h>
using namespace std;
long long n,s=0,a[10000001];
int main()
{
    freopen("TONGBP.INP","r",stdin);
    freopen("TONGBP.OUT","w",stdout);

    cin>>n;
    s=n*(n + 1)*(2*n + 1)/6;
    cout<<s<<"\n";

}

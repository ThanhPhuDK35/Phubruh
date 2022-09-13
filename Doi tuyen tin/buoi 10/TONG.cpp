#include <bits/stdc++.h>
using namespace std;
long long n,s=0,a[10000001];
int main()
{
    freopen("TONG.INP","r",stdin);
    freopen("TONG.OUT","w",stdout);
    cin>>n;
    cout<<((n+1)*(4*n*n + 8*n + 3)) / 3;
}

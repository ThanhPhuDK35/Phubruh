#include <bits/stdc++.h>
using namespace std;
long long n,s=0,a[10000001], m;
int main()
{
    freopen("tongbp.INP","r",stdin);
    freopen("tongbp.OUT","w",stdout);
    cin>>n;
    m = 1e9 + 7;
    long long s1 = n*(n + 1)%m;
    long long s2 = s1*(2*n + 1)%m;
    cout<<s2/6;

}

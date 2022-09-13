#include <bits/stdc++.h>
using namespace std;
long long n, sum;

int main()
{
    freopen("cube.inp","r",stdin);
    freopen("cube.out","w",stdout);
    cin>>n;
    sum=((1+n)*n%1000000007)/2;
    cout<<((sum%1000000007)*(sum%1000000007))%1000000007;
}

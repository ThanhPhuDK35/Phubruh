#include<bits/stdc++.h>
using namespace std;
long long x, y, m, n, dem;

int main()
{
    freopen("Etable.inp","r",stdin);
    freopen("Etable.out","w",stdout);
    cin>>m>>n;
    cout<<(m+1)*(n+1)/__gcd((m+1), (n+1));
}

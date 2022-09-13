#include<bits/stdc++.h>
using namespace std;
long long n, s, e, j;

int main()
{
    freopen("CUBICS.inp","r",stdin);
    freopen("CUBICS.out","w",stdout);
    cin>>n;
    e=1;
    s=1;
    j=2;
    for(int i=2; i<=n; i++)
    {
        e=e+j;
        s=s+e;
        j++;
    }
    cout<<e;
}
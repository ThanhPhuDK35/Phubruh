#include<bits/stdc++.h>
using namespace std;
long long n, s;

int main()
{
    freopen("sum.inp","r",stdin);
    freopen("sum.out","w",stdout);
    cin>>n;
    for(int i=1 ; i<=n; i++)
    {
        s=s+(n/i);
    }
    cout<<s;
}
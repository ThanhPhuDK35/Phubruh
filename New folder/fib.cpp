#include<bits/stdc++.h>
using namespace std;
long long a[10000001], n;

int main()
{
    freopen("fib.inp","r",stdin);
    freopen("fib.out","w",stdout);
    cin>>n;
    a[1]=1;
    a[2]=1;
    for(int i=3; i<=n; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    cout<<a[n];
}
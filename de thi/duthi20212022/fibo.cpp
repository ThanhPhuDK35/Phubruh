#include<bits/stdc++.h>
using namespace std;
long long n, f[10000001];

int main()
{
    freopen("fibo.inp","r",stdin);
    freopen("fibo.out","w",stdout);
    cin>>n;
    f[1]=f[2]=1;
    for(int i=3; i<=50; i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    for(int i=50; i>=1; i--)
    {
        if(f[i]<=n)
        {
            cout<<f[i]<<" ";
            n=n-f[i];
        }
    }
}


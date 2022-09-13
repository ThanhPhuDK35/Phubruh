#include <bits/stdc++.h>
using namespace std;
long long f[1000007],x,dem=0;

int main()
{
    freopen("SFIBO.inp","r",stdin);
    freopen("SFIBO.out","w",stdout);
    f[1]=f[2]=1;
    for (int i=3; i<=45; i++)
        f[i]=f[i-1]+f[i-2];
    cin>>x;
    for (int i=45; i>=1; i--)
    if (x>=f[i])
    {
        dem++;
        x-=f[i];
        cout<<f[i]<<" ";
    }
}

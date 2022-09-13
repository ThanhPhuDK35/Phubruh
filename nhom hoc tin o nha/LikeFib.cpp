#include<bits/stdc++.h>
using namespace std;
long long f[1000001], n;

int main()
{
    //freopen("likefib.inp","r",stdin);
   // freopen("likefib.out","w",stdout);
    cin>>n;
    f[1]=1;f[2]=1;
    for(int i=3; i<=n; i++)
    {
        f[i]=(f[i-1]+2*f[i-2])%2019;
    }
    cout<<f[n];

}

#include<bits/stdc++.h>
using namespace std;
long long n, a[300001], f[300001];

int main()
{
    freopen("JUMP.inp","r",stdin);
    freopen("JUMP.out","w", stdout);
    cin>>n;
    for(int i=1;i<=n; i++)
    {
        cin>>a[i];
    }
    f[0]=f[1]=0;
    f[2]=abs(a[2]-a[1]);
    for(int i=3; i<=n; i++)
    {
        f[i]=min(f[i-1]+abs(a[i]-a[i-1]), f[i-2]+ 3*abs(a[i]-a[i-2]));
    }
    cout<<f[n];
}

#include <bits/stdc++.h>
using namespace  std;
long long n,a[100005],m,b[100005],d=0;
int main()
{
    freopen("FLOWER.INP","r",stdin);
    freopen("FLOWER.OUT","w",stdout);
    cin>>n>>m;
    for (long long i=1;i<=n;i++)
    {
          cin>>a[i];
    }

    for (long long i=1;i<=m;i++)
        cin>>b[i];
    for (long long i=1;i<=m;i++)
    {
        for (long long j=1;j<=n;j++)
            {
            if(a[j]>=b[i])
                d++;
            }

        cout<<d<<' ';
        d=0;
    }


}

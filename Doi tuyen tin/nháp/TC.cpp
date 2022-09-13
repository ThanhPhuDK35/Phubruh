#include<bits/stdc++.h>
using namespace std;
long long m, n, s;

int  main()
{
    freopen("TC.inp","r",stdin);
    freopen("TC.out","w",stdout);
    cin>>m>>n;
    s=0;
    for(int i=m; i<=n; i++)
    {
        if(i%2==0)
        {
            s=s+i;
        }
    }
    cout<<s;
}

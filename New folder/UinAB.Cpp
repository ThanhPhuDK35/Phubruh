#include<bits/stdc++.h>
using namespace std;
long long m, a, b, p[1000001],x[1000001], s, k, u;

int main()
{
    freopen("UinAB.inp","r",stdin);
    freopen("UinAB.out","w",stdout);
    cin>>m>>a>>b;
    for(int i=1; i<=m; i++)
    {
        cin>>p[i]>>x[i];
    }
    for(int e=1; e<=b; e++)
    {
        u=e;
        for(int i = 1; i<=m; i++)
        {
            k=0;
            while(k < x[i] && u%p[i] == 0)
            {
                k++;
                u=u/p[i];
            }
        }
        if(u==1) s++;
    }
    cout<<s;
}

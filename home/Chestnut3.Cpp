#include<bits/stdc++.h>
using namespace std;
long long a[10000001], n, m, x, s, e, h;

int main()
{
    freopen("Chestnut3.inp","r",stdin);
    freopen("Chestnut3.out","w",stdout);
    cin>>n>>m;

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    cin>>e>>h;
    s=0;
    x=0;
    for(int i=e; i<=n;i++)
    {
        if(a[i]==1)
        {
            x++;
        }
        s++;
        if(s==h+1)
            break;
    }
    cout<<x;



}

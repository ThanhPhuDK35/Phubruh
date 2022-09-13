#include<bits/stdc++.h>
using namespace std;
long long a[10000001], n, m, x, s, e;

int main()
{
    freopen("Chestnut2.inp","r",stdin);
    freopen("Chestnut2.out","w",stdout);
    cin>>n>>m;

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    cin>>e;
    s=0;
    x=0;
    for(int i=e; i>=1;i--)
    {
        if(a[i]==1)
        {
            x++;
        }
        s++;
        if(s==3)
            break;
    }
    cout<<x;



}

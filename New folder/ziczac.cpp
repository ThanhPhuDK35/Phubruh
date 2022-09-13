#include<bits/stdc++.h>
using namespace std;
long long n, a[3][10001], d=0, s=0, x;

int main()
{
    freopen("ziczac.inp","r",stdin);
    freopen("ziczac.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[1][i];
    }
    for(int i=1; i<=n; i++)
    {
        cin>>a[2][i];
    }

    for(int i=1; i<=n; i=i+2)
        {

            x=x+a[2][i]+a[1][i+1];
        }
    for(int i=1; i<=n; i=i+2)
        {

            d=d+a[1][i]+a[2][i+1];
        }
    if(x>d)
        cout<<x;
    else
        cout<<d;

}

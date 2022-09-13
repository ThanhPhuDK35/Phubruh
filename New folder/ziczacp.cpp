#include<bits/stdc++.h>
using namespace std;
long long n, a[3][10001], d=0, s=0, x, k, v;

int main()
{
    freopen("ziczacp.inp","r",stdin);
    freopen("ziczacp.out","w",stdout);
    cin>>n>>k;
    for(int i=1; i<=2; i++)
        for(int j=1; j<=n; j++)
           cin>>a[i][j];
    for(int j=2; j<=n; j++)
    {
        s = j;
        if(j%2==1)
        {
            if(abs(a[1][j]-a[2][j-1])>k)
                break;
        }
        else
        {
            if(abs(a[2][j]-a[1][j-1])>k)
                break;
        }
    }
    for(int j=2; j<=n; j++)
    {
        v = j;
        if(j%2==1)
        {
            if(abs(a[2][j]-a[1][j-1])>k)
                break;
        }
        else
        {
            if(abs(a[1][j]-a[2][j-1])>k)
                break;
        }
    }
    cout<<max(s, v);

}

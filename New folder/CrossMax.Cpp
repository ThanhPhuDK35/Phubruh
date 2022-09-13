#include<bits/stdc++.h>
using namespace std;
long long a[10000][10000], b, c, d, e, f, m;

int main()
{
    freopen("CrossMax.inp","r",stdin);
    freopen("CrossMax.out","w",stdout);
    for(int i=1; i<=3; i++)
        for(int j=1; j<=3; j++)
           cin>>a[i][j];
    b=a[1][1];
    c=a[2][1]+a[1][2];
    d=a[3][1]+a[2][2]+a[1][3];
    e=a[3][2]+a[2][3];
    f=a[3][3];
    m=b;
    if(m<c)
        m=c;
    if(m<d)
        m=d;
    if(m<e)
        m=e;
    if(m<f)
        m=f;
    cout<<m;

}

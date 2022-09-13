#include<bits/stdc++.h>
using namespace std;
long long s, a[10000001], m, x, b[10000001], e, z, p, q;
string y;

int main()
{
    freopen("SOMAX.inp","r",stdin);
    freopen("SOMAX.out","w",stdout);
    cin>>y;
    x=1;
    for(int i=0; i<y.size(); i++)
    {
        if(y[i] == '1' || y[i]== '2' || y[i] == '3' || y[i]=='4' || y[i]=='5'|| y[i]=='6'|| y[i]=='7'|| y[i]=='8'|| y[i]=='9'|| y[i]=='0')
          {
              a[x]=y[i]-48;
              x++;
          }
    }
    for(int i=x-4; i>=1; i--)
    {
        if(a[i] >= m)
        {
            m=a[i];
            e=i;
        }
    }
    cout<<m;
    m=0;
    for(int i=x-3; i>=e+1; i--)
    {
        if(a[i] >= m)
        {
            m=a[i];
            z=i;
        }
    }
    cout<<m;
    m=0;
    for(int i=x-2; i>=z+1; i--)
    {
        if(a[i] >= m)
        {
            m=a[i];
            p=i;
        }
    }
    cout<<m;
    m=0;
    for(int i=x-1; i>=p+1; i--)
    {
        if(a[i] >= m)
        {
            m=a[i];
            q=i;
        }
    }
    cout<<m;
}

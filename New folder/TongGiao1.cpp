#include<bits/stdc++.h>
using namespace std;
long long x[1000000], a, b, c, d, e;

int main()
{
    freopen("TongGiao1.Inp","r",stdin);
    freopen("TongGiao1.Out","w",stdout);
      cin>>a>>b;
      cin>>c>>d;
      e=0;
      for(int i=a; i<=b; i++)
      {
          for(int j=c; j<=d; j++)
          {
              if(i==j)
              {
                   e=e+i;
              }


          }
      }
      cout<<e;
}

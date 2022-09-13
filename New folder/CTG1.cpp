#include<bits/stdc++.h>
using namespace std;
long long x1, x2, y2, x3, y3, s, y, a, b, c, x, e;

int main()
{
    freopen("CTG1.inp","r",stdin);
    freopen("CTG1.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>x1>>y;
    cin>>x2>>y2;
    cin>>x3>>y3;
    s=0;
    for( a=x1; a <= y; a++)
        for( b= max(a, x2) ; b<=y2; b++)
           {
               if(0 < a && b<=y3)
               {
                  x=min(a+b-1, y3);
                  e = max(b, x3);
                  s = s + x - e + 1;
               }

           }
        cout<<s;
}

#include<bits/stdc++.h>
using namespace std;
int a, b, c, d, e, g, s;
int main()
{
    cin >> a >> b >> c >> d >> e >> g;
    s = 0;
    if(a=b=c)
    {
        s = s + 1;
    }
    if(a=b=d)
    {
        s = s + 1;
    }
    if(a=b=e)
    {
        s = s + 1;
    }
    if(a=b=g)
    {
        s = s + 1;
    }
    if(c=d=e)
     {
        s = s + 1;
     }
    if(c=d=e)
     {
        s = s + 1;
     }
     if(c=d=g)
     {
        s = s + 1;
     }
     if(d=g=e)
     {
        s = s + 1;
     }
        cout<<s;
}


#include<bits/stdc++.h>
using namespace std;
long long x, y, s, e;

int main()
{
    //freopen("copy.inp","r",stdin);
    //freopen("copy.out","w",stdout);
    cin>>x>>y;
    if(y < x || y<=0 || x<=0) {cout<<"NO"; return 0;}
    y=y-1;
    while(y>0)
    {   
        y=y-1;
        x=x-1;
    }
    if(x%2 == 0)
    {   
        cout<<"YES";
    }
    else
    cout<<"NO";
}
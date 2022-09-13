#include<bits/stdc++.h>
using namespace std;
long long a1,b1,c1,a2,b2,c2,d,dx,dy,x,y;

int main()
{
    freopen("GIABUTVO.inp", "r", stdin);
    freopen("GIABUTVO.out", "w", stdout);
    cin>>a1>>b1>>c1;
    cin>>a2>>b2>>c2;
    d= a1*b2-a2*b1;
    dx=c1*b2-c2*b1;
    dy=a1*c2-a2*c1;
    x=dx/d;
    y=dy/d;
    cout<<x<<" "<<y;
}

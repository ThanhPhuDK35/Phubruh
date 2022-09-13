#include <bits/stdc++.h>
using namespace std;
struct kc
{
    float x,y;
};
kc a,b,c,d;
int main ()
{
    cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;
    d.x=a.x+c.x-b.x;
    d.y=a.y+c.y-b.y;
    cout<<d.x<<" "<<d.y;
}

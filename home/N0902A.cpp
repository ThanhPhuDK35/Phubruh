#include <bits/stdc++.h>
using namespace std;
struct kc
{
    float x,y;
};
kc a,b,c,d, ab, ac;
int main ()
{
    cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;
    d.x=a.x+c.x-b.x;
    d.y=a.y+c.y-b.y;
    ab.x=b.x-a.x;
    ab.y=b.y-a.y;
    ac.x=c.x-a.x;
    ac.y=c.y-a.y;
    cout << (abs(ab.x*ac.y-ac.x*ab.y));
}

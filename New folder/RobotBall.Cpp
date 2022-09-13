#include<bits/stdc++.h>
using namespace std;
long long a, b, n, nd, nx, du, e;

int main()
{
    freopen("RobotBall.inp","r",stdin);
    freopen("RobotBall.out","w",stdout);
    cin>>a>>b>>n;
    e=n/(a+b);
    du=n%(a+b);
    nd=a*e;
    if(du <= a)
        nd=nd+du;
    else
        nd=nd+a;
    nx=n-nd;


    cout<<nd<<"\n"<<nx;
}

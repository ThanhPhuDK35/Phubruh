#include <bits/stdc++.h>
using namespace std;
float a,b, c;

int main()
{
    freopen("area.Inp","r",stdin);
    freopen("area.Out","w",stdout);
    cin>>a>>b>>c;
    float g=(b-a)/2;
    float x=sqrt(c*c-g*g);
    float g1=(a+b)*x/2;
    float x1=x/4;
    float fi=g1-x1*x1*3.14;
    cout<<setprecision(2)<<fixed<<fi;
}

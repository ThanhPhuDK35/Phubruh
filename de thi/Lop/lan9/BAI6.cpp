#include<bits/stdc++.h>
using namespace std;
string x, y, a1, b1;
long long a, b;

int main()
{
    freopen("BAI6.inp","r",stdin);
    freopen("BAI6.out","w",stdout);
    cin>>x>>y;
    a1=x+y;
    b1=y+x;
    a=0;
    for(int i=0; i<a1.size(); i++)
    {
        a=a*10+(a1[i]-48);
    }
    b=0;
    for(int i=0; i<b1.size(); i++)
    {
        b=b*10+(b1[i]-48);
    }
    cout<<min(a, b)<<"\n"<<max(a, b);
}
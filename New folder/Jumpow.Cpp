#include<bits/stdc++.h>
using namespace std;
long long x, y;

int main()
{
    freopen("Jumpow.inp","r",stdin);
    freopen("Jumpow.out","w",stdout);
    cin>>x;
    y=2;
    while(y <= x)   
    {
        y=y*2;
    }
    cout<<y/2;
}
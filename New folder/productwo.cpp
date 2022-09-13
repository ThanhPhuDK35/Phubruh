#include<bits/stdc++.h>
using namespace std;
int a, b, c, x;

int main()
{
    //cout<<"Nhap 4 so a,b,c,x: "<<endl;
    cin>>a>>b>>c>>x;
    if(a*b == x)
    {
        cout<<"1";
    }
    if(a*c == x)
    {
        cout<<"1";
    }
    if(b*c == x)
    {
        cout<<"1";
    }
    else
    {
        cout<<"0";
    }

}

#include<bits/stdc++.h>
using namespace std;
long long a, b, c;

int main()
{
    freopen("SOSANH.inp","r", stdin);
    freopen("SOSANH.out","w",stdout);
    cin>>a>>b>>c;
    if(c%2 == 0)
    {
        a=abs(a);
        b=abs(b);
    }
    if(c == 0)
    {
        cout<<"0";
        return 0;
    }
        if(a > b) 
        {
            cout<<"1";
            return 0;
        }
        if(a < b)
        {
            cout<<"-1";
            return 0;
        }
        if(a == b)
        {
            cout<<"0";
            return 0;
        }
}
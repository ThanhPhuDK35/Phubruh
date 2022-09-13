#include<bits/stdc++.h>
using namespace std;
string y, x;


int main()
{
    cin>>y;
    cin>>x;
    int a=y.length();
    int b=x.length();
    if(a>b)
        cout<<x+y;
    else
        cout<<y+x;

}

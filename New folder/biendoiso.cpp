#include<bits/stdc++.h>
using namespace std;
int b, c, a;

int main()
{
    cout<<"nhap vao so a: ";
    cin>>a;
    b = 0;
    c = 0;
    if(a % 2 == 0)
     {
        b = b+a;
        c = c+2*a;
     }

    else
    {
      b = b+3*a;
        c = c+4*a;

    }
    cout<<"b la: "<<b;
    cout<<", c la: "<<c;

}



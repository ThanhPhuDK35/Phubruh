#include<bits/stdc++.h>
using namespace std;
int a, b, p, q, r;

int main(){
cout<<"nhap 2 so a va b: ";
cin>>a>>b;
if(a % 2 == 0 && b % 2 == 0)
{
   p=a*b-2*a+3*b;
   cout<<"P = "<<p;
}

if(a % 2 == 1 && b % 2 == 1)
{
    q=a*a+b*b;
    cout<<"q = "<<q;
}
else
{
    r=a*a-b*b;
    cout<<"r = "<<r;

}
}





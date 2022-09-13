#include<bits/stdc++.h>
using namespace std;
int a, b, c, d, e, s;
int main(){
   cout<<"nhap vao 5 so nguyen: ";
   cin>>a>>b>>c>>d>>e;
   if(a<0)
    s=s+a;
   if(b<0)
    s=s+b;
   if(c<0)
    s=s+c;
   if(d<0)
    s=s+d;
   if(e<0)
    s=s+e;
   cout<<"tong cac so am la: "<<s;


}

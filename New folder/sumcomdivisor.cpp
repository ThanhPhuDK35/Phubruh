#include<bits/stdc++.h>
using namespace std;
int a, b, c, i, n;
 int main()
 {
     //cout<<"Nhap 2 so a va b: ";
     cin>>a>>b;
     n = 0;
     if(a > b)
     {
         c = b;
     }
     if(a < b)
     {
         c = a;
     }
     // c = min(a, b);
     for(i = 1; i <= c; i = i + 1)
     {
         if(a%i == 0 && b%i == 0)
         {
             n = n+i;
         }
     }
     cout<<n;
 }

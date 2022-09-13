#include<bits/stdc++.h>
using namespace std;
int a, b, c, n;
int main(){

    cin>> n;
    c=0;

    for(int i=0; i<n ; i++)
    {
        cin>>a;
          while(a > 0)
      {
         b = a % 10;
         a = a / 10;
         c=c+b;
      }

    }
cout << c;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   long double a,s=0;
   long long i=0;
   cin>>a;
   if(a==0)
    cout<<'0';
   else
   {
    while (s<=a)
        {
            i++;
            s=s+(float)1/i;
        }

    cout<<i;
   }

}

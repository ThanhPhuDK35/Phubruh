#include<bits/stdc++.h>
using namespace std;
long long n, s, i;

int main()
{
     cin>>n;
     i=2;
     while(n>1)
     {
         if(n%i==0)
         {
             n=n/i;
             m=i;
         }
         else
         {
             i++;
         }
     }
}

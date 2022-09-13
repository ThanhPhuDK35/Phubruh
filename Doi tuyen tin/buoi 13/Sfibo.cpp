#include <bits/stdc++.h>
using namespace std;
long long fibo[1000007],X,dem=0;

int main()
{
   freopen("Sfibo.inp","r",stdin);
   freopen("Sfibo.out","w",stdout);
   fibo[1]=fibo[2]=1;
   for (int i=3; i<=45; i++)
    fibo[i]=fibo[i-1]+fibo[i-2];
   cin>>X;
   for (int i=45; i>=1; i--)
    if (X>=fibo[i])
   {
       dem++;
       X-=fibo[i];
       cout<<fibo[i]<<" ";
   }
}
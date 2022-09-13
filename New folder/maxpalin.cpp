#include<bits/stdc++.h>
using namespace std;

int a[1000000];
long long n, m;
int main()
{
   cin>>n;

   for(int i = 1; i <= n ; i++)
    {
        cin>>a[i];

    }
    m=0;
   for(int i = 1; i <= n-1 ; i++)
   {
       if(a[i]+a[n] > m)
       {
           m=a[i]+a[n];
       }
       n=n-1;
   }
   cout<<m;
}

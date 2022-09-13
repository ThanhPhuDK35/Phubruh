#include<bits/stdc++.h>
using namespace std;
long long a[10000001], m, n, s;
int main()
{
    freopen("Tallest.Inp","r",stdin);
    freopen("Tallest.Out","w",stdout);
   cin>>n;
   for(int i=1; i<=n; i++)
   {
       cin>>a[i];
   }
   s=1;
      for(int i=1; i<=n; i++)
   {
       if(a[s]<=a[i])
        s=i;

   }

      for(int i=1; i<=n; i++)
   {
       if(a[s]==a[i])
        cout<<i<<" ";

   }



}

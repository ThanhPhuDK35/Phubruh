#include<bits/stdc++.h>
using namespace std;
long long x,y,z,n,k,a[10000001];
int main()
{
     //freopen("CandyCoder.inp","r",stdin);
     //freopen("CandyCoder.out","w",stdout);
     cin>>n;
     for(int i = 1; i <= n; i++)
         cin>>a[i];
     sort(a+1,a+1+n);
     cin>>k;
     x = 0;
     for(int i = 1; i <= n; i++)
     {
            x += (a[n]-a[i]);
            a[i] = a[n];
     }
     if(x >= k)
     {
         cout<<x-k;
         return 0;
     }
     k =k - x;
     y = k;
     k--;
     while(k++)
     {
         if(k%n == 0)
         {
            cout<<abs(k-y);
            return 0;
         }
     }
}

#include<bits/stdc++.h>
using namespace std;
long long a[10000001], b[10000001], n, q, l[100000], r[100000];


int main()
    {

         b[0]=0;
         cin>>n;
         for(int i=1; i<=n;i++)
         {
             cin>>a[i];
             b[i]=b[i-1]+a[i];
         }
         cin>>q;
         for(int i=1; i<=q; i++)
         {
             cin>>l[i]>>r[i];
         }
         for(int i=1; i<=q;i++)
         {
             cout<<b[r[i]]-b[l[i]-1]<<"\n";
         }

    }

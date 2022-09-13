#include<bits/stdc++.h>
using namespace std;
long long a[50000001],n, k, s, x, i;


int main()
    {
    freopen("SgreaterK.inp","r",stdin);
    freopen("SgreaterK.out","w",stdout);
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

    cin>>n>>k;
    for(int e=1; e<=n;e++)
    {
             cin>>a[e];

    }
    s = 0; x = 0 ; i=1;
    for(int  j = 1; j <= n; j++)
         {
            x = x + a[j];
               if( x >= k)
               {
                  while(i<j && x-a[i] >= k)
                  {
                      x=x-a[i];
                      i++;
                  }
                  s=s+i;
               }
         }
    cout<<s;

    }

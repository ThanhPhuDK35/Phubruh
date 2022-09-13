#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nmax 1000001
#define mod 1000000007
ll x,y,z,n,a[nmax],b[nmax];
deque<ll> q;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("ReformProduct.inp","r",stdin);
    freopen("ReformProduct.out","w",stdout);
    cin>>n; x = 1;
    ll u = 0,v = 0; y = -1e9;
    int ii;
    for(ll i = 1 ; i <= n; i++)
    {
        cin>>a[i];
        if(a[i] < 0)
           {
               u++;
               if(y < a[i]){y = a[i]; ii = i;}
           }

        if(a[i] == 0)
            v++;
    }
    if(v >= 2)
    {
        cout<<0; return 0;
    }
    if(v == 1)
    {
        if(u%2 == 0)
            {for(ll i = 1; i <= n; i++)
               { if(a[i] != 0)
                    x *= a[i];
                    x %= mod;
               }
               cout<<x; return 0;}
            cout<<0; return 0;
    }
  else
  {
      if(u%2 == 0)
        {for(ll i = 1; i <= n; i++)
           {x *= a[i]; x %= mod;}
          cout<<x;
        }
      else
      {
        for(ll i = 1; i <= n; i++)
           if(i != ii)
           {x *= a[i]; x %= mod;}

          cout<<x;
         }
      }
  }

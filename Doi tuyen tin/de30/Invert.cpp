#include<bits/stdc++.h>
using namespace std;
long long n, a[1001], l[11], r[11], s, q;

int main()
{
    freopen("Invert.inp","r",stdin);
    freopen("Invert.out","w",stdout);
    cin>>n>>q;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<= q; i++)
    {
        cin>>l[i]>>r[i];
    }
    for(int i=1; i<= q; i++)
    {
       int u = l[i]; int v = r[i];
       s=0;
       for(int e=u; e<=v; e++)
       {
           for(int j= e+1; j<=v; j++)
           {
               if(a[e]>a[j])
                s++;
           }
       }
       cout<<s<<"\n";
    }

}

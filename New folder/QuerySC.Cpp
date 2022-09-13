#include<bits/stdc++.h>
using namespace std;
long long q, a, b, k, x, s, n, e;

int main()
{
     freopen("QuerySC.inp","r",stdin);
     freopen("QuerySC.out","w",stdout);
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     cin>>q;
     for(int i=1; i<=q; i++)
     {
         cin>>a>>b>>k;
         e=(b-a)/k;
         cout<<(e+1)*a+k*((1+e)*e/2)<<"\n";
     }

}

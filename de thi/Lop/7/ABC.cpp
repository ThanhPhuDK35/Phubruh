#include <bits/stdc++.h>
#define ll long long
using namespace std;
string s;
ll* a=new ll[1000005];
ll* b=new ll[1000005];
ll* c=new ll[1000005];
ll t,i,j;
int main()
{
    freopen("ABC.INP","r",stdin);
    freopen("ABC.OUT","w",stdout);
    cin>>s;
    t=0;
    s=" "+s;
    a[0]=0;  b[0]=0;  c[0]=0;
    for (i=1;i<s.length();i++)
    {
     if (s[i]=='A')
     {
         a[i]=a[i-1]+1;
         b[i]=b[i-1];
         c[i]=c[i-1];
     }
     else
      if (s[i]=='B')
     {
         a[i]=a[i-1];
         b[i]=b[i-1]+1;
         c[i]=c[i-1];
     }
     else
      if (s[i]=='C')
     {
         a[i]=a[i-1];
         b[i]=b[i-1];
         c[i]=c[i-1]+1;
     }
    }

     for (i=1;i<s.length()-2;i++)
     {
        for (j=i+2;j<s.length();j++)
         {
             if ((a[j]-a[i-1]>0) and (b[j]-b[i-1]==a[j]-a[i-1]) and (c[j]-c[i-1]==a[j]-a[i-1]) and (a[j]-a[i-1]+b[j]-b[i-1]+c[j]-c[i-1]==j-i+1))
                t++;
         }
     }

     cout<<t;;
}

#include<bits/stdc++.h>
using namespace std;
string st;
long long  n, s, x, y, z;
int main()
{
    freopen("password1.Inp","r",stdin); // mo tep de doc
    freopen("password1.Out","w",stdout); //mo tep de ghi
   cin>>st;
   n=st.length();
   s=0;
   for(int i=0; i<=n-3; i++)
   {
       x=y=z=0;
       for(int t=0; t<= 2; t++)
       {
           if('a'<=st[i+t] && st[i+t] <= 'z')
            x++;
           if('A' <= st[i+t] && st[i+t] <= 'Z')
            y++;
           if('0' <= st[i+t] && st[i+t] <= '9')
            z++;
       }
       if(x*y*z==1)
        s++;
   }
   cout<<s;
}


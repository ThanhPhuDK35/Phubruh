#include<bits/stdc++.h>
using namespace std;

string y, a;
long long s=0, e;

bool dx(string  x)
{
    e=0;
    y = "";
    int n = x.size();
    for(int i = n-1; i >=0; i--)
    {
       y = y + x[i];
    }
    if(x==y)
          return true;
    else
        return false;

}

int main()
{
    s=0;
   cin>>a;
   for(int i=0; i<a.size(); i++)
   {
       if((a[i]-48)%2 != 0)
        s++;
   }
   cout<<s;
}

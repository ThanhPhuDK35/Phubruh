#include<bits/stdc++.h>
using namespace std;


long long n, s, a;
int main()
{
   cin>>n;
   a=2;
   s=0;
  while(a*a <= n)
  {
      if(n%a==0)
      {
          s=a;
          break;
      }
      a++;
  }
  if(s==0)cout<<n+1;
  else cout<<s+1;
}

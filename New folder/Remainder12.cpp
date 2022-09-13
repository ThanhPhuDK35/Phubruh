#include<bits/stdc++.h>
using namespace std;
int a[1000000];
long long n,s;

int main()
{
      freopen("Remainder12.Inp","r",stdin); // mo tep de doc
      freopen("Remainder12.Out","w",stdout); //mo tep de ghi
      cin>>n;
      s=0;
      for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
       for(int i=1; i<=n; i++)
        {
          for(int j=i+1; j<=n; j++)
          {
              if((a[i]+a[j])%5 == 1 || (a[i]+a[j])%5 == 2)
                s++;
          }
        }
    cout<<s;
}

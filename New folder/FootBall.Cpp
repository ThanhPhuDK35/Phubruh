#include<bits/stdc++.h>
using namespace std;
long long n, h, w, s;
int a[100000];
int b[100000];

int main()
{
      freopen("FootBall.Inp","r",stdin); // mo tep de doc
      freopen("FootBall.Out","w",stdout); //mo tep de ghi
      cin>>n>>h>>w;
      s=0;
      for(int i=0; i < n; i++)
        cin>>a[i];
      for(int i=0; i < n; i++)
        cin>>b[i];
      for(int i=0; i < n; i++)
      {
          if(a[i] >= h && b[i] >= w)
          s++;
      }
      cout<<s;

}

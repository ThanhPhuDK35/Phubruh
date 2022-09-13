#include<bits/stdc++.h>
using namespace std;
int a[100001], b[100001];
int n, s;
int main()
{
    freopen("maximalvalue.Inp","r",stdin); // mo tep de doc
    freopen("maximalvalue.Out","w",stdout); //mo tep de ghi
    cin>>n;
    s=0;
    for(int i=1; i <= n; i++)
      cin>>b[i];
      a[n-1]=a[n]=b[n-1];
      for(int i=n-2; i >= 1; i--)
      {
          a[i]=b[i];
          a[i+1]=min(b[i],a[i+1]);
      }


    for(int i=1; i<= n; i++)
        s=s+a[i];

    cout<<s;
}

#include<bits/stdc++.h>
using namespace std;
long long n, a[10001], b, k, s;

long long ma(long long a, long long x)
{
    if(x <= a)
        return x;
    else
    {
      while(x > a)
      {
          x=x-a;
      }
      return x;
    }
}

int main()
{

    freopen("SUM.inp","r",stdin);
    freopen("SUM.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k>>b;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    b=ma(n, b);
    s=0;
    for(int i=b; i<=k+b-1; i++)
    {
        s=s+a[ma(n, i)];
        cout<<a[ma(n, i)]<<"\n";
    }
    cout<<s;
}

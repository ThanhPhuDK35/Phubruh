#include<bits/stdc++.h>
using namespace std;
long long a, b, n , k,s = 0 ;
int main()
{
    freopen("NumPowerK.INP", "r", stdin);
    freopen("NumPowerK.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b>>k;
    if(k > 1)
    {
      for(long long x = 1;x <= 100000;x++)
      {
        long long e = 1;
        for(long long i = 1;i <= k;i++)
            e = e * x;
        if(e >= a && e <= b)
            s++;
      }
      cout<<s;
    }
    else
    {
        cout<<b - a + 1;
    }
}

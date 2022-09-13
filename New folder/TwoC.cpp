#include<bits/stdc++.h>
using namespace std;
long long a[1000005], n, s = 0,e, f, u, ans = 1e18, sum[10000005];
int main()
{
    freopen("TwoC.INP","r",stdin);
    freopen("TwoC.OUT","w",stdout);
    ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    cin>>n;
    for(int i = 1;i <= n;i++)
        {
          cin>>a[i];
          sum[i] = sum[i-1] + a[i];
        }
   // sort(a + 1, a+ n + 1);
    for(int i = 1;i < n;i++)
    {
         e=(i+1)/2; f = (n+1+i)/2;
         u=(e-1)*a[e] - sum[e-1];
         u=u-(i-e)*a[e]+sum[i]- sum[e];
         u=u+(f-1-i)*a[f]-(sum[f-1]-sum[i]);
         u=u-(n-f)*a[f]+sum[n]-sum[f];
         ans=min(ans, u);

    }
    cout<<ans;
}


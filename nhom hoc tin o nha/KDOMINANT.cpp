#include <bits/stdc++.h>
using namespace std;
long long n, a[1000001],s[1000001];
bool check(int mid)
{
    memset(s,0,sizeof s);

    for(int j=1;j<=50;j++)
    {
        int dem=0;
    for(int i=1;i<=n;i++)
        if(a[i]==j)
            s[i]=s[i-1]+1;
        else
            s[i]=s[i-1];
    for(int i=1;i<=n-mid+1;i++)
        if(s[i+mid-1]-s[i-1]>0)
            dem++;
    if(dem==n-mid+1)
        return true;
    }

    return false;
}
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    int l,r,ans=1e9,m;
    l=1;r=n;
    while(l<=r)
    {
      m=(l+r)/2;
      if(check(m)==true)
      {
          ans=min(ans,m);
          r=m-1;
      }
      else
        l=m+1;
    }
    cout<<ans;

}

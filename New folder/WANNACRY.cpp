#include <bits/stdc++.h>
using namespace std;
long long n, k, a[200001],ans=-1e9;
int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        a[i]=a[i]+k;
    for(int i=1;i<=n;i++)
    {
        long long l,r,m,dem=0,j;
        l=i;r=n;
        while(l<=r)
        {
            m=(l+r)/2;
            if(abs(a[m]-a[i])<=k)
            {
                j=m;
                l=m+1;
            }
            else
                r=m-1;;
        }
        dem=dem+j-i+1;
        l=1;r=i;
        while(l<=r)
        {
            m=(l+r)/2;
            if(abs(a[m]-a[i])<=k)
            {
                j=m;
                r=m-1;
            }
            else
               l=m+1;
        }
        dem=dem+i-j+1;
        ans=max(ans,dem);
    }
    cout<<ans;
}

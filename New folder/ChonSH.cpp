#include<bits/stdc++.h>
using namespace std;
long long a[10000001], s[10000001], n, k, sum, e;


int main()
{
    freopen("ChonSH.Inp", "r", stdin);
    freopen("ChonSH.Out", "w", stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    cin>>sum;
    s[0]=0;
    for(int i=1; i<=n; i++)
        s[i]=s[i-1]+a[i];
    int ans= 0, left, right, mid;
    for(int i=1; i<=n; i++)
    {
        left=i; right=n;
        while(left <= right)
        {
            mid=(left+right)/2;
            e=s[mid]-s[i-1];
            if(e <= sum) 
            {
                ans=max(ans, mid-i+1);
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
    }
    cout<<ans;
}
    
#include <bits/stdc++.h>
using namespace std;
long long n, q, a[100001], s[100001], u, v;

int main()
{
    cin>>n>>q;
    s[0]=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s[i]=s[i-1]+a[i];
    }
    while(q--)
    {
        cin>>u>>v;
        long long low=u, hight=v, ans=1e18, ans2, s1, s2, mid;
        while(low <= hight)
        {
            mid=(low+hight)/2;  
            s1=s[mid]-s[u-1]; s2=s[v]-s[mid];
            if(s1 < s2) low = mid + 1;
            else
            {
                ans=min(ans, s1-s2);
                hight = mid - 1;
            }
        }
        low=u, hight=v, ans2=1e18, s1, s2, mid;
        while(low <= hight)
        {
            mid=(low+hight)/2;  
            s1=s[mid]-s[u-1]; s2=s[v]-s[mid];
            if(s1 > s2) hight = mid - 1;
            else
            {
                ans2=min(ans2, s2-s1);
                low = mid + 1;
            }
        }
        cout<<min(ans, ans2)<<"\n";
    }
}
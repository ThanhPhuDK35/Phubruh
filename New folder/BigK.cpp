#include<bits/stdc++.h>
using namespace std;
pair <long long, int> s[500005];
int a[500005], mi[500005], n, k,ans,e,i0;
int m;
int main()
{
    //freopen("BigK.inp","r",stdin);
    //freopen("BigK.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=1; i<=n;i++) cin>>a[i];
        s[0].first=0; s[0].second=0;
    for(int i=1; i<= n; i++)
    { s[i].first=a[i]+s[i-1].first;  s[i].second=i; }
    sort(s+1,s+1+n);
    mi[1]=s[1].second;
    for (int i=2; i<=n; i++)
        mi[i]=min(mi[i-1],s[i].second);
    for (int j=1; j<=n; j++)
    {
        if(s[j].first>=k) ans=max(ans, s[j].second);
        else
        {
            int left=1; int right=j-1; i0=0;
            while(left<=right)
            {
                int mid=(left+right)/2;
                if (s[j].first-s[mid].first>=k) {i0=mid; left=mid+1;}
                else
                    right=mid-1;
            }
        }
        if (i0>0) {e=mi[i0]; ans=max(ans,s[j].second-e);};
    }
    cout<<ans;
}
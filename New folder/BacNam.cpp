#include <bits/stdc++.h>
using namespace std;
long long n,a,dem=0,dem1=0,ans=1,ans1=1;
pair <long long,long long> le[1000006],chan[1000006];

int main()
{
    freopen("BACNAM.inp","r",stdin);
    freopen("BACNAM.out","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a;
        if(a%2==0)
        {
            dem++;
            chan[dem].first=a;
            chan[dem].second=i;
        }
        else
        {
            dem1++;
            le[dem1].first=a;
            le[dem1].second=i;
        }
    }
    sort(chan+1,chan+dem+1);
    sort(le+1,le+dem1+1);
    for (int i=1;i<dem;i++)
        if (chan[i].second>chan[i+1].second) 
            ans++;
    for (int i=1;i<dem1;i++)
        if (le[i].second>le[i+1].second) 
            ans1++;
    cout<<ans1<<'\n'<<ans;
}
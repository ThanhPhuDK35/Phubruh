#include<bits/stdc++.h>
#define N 1000005
#define ll long long
using namespace std;
ll n,k, a[N], dem=0,S[N],kq=0,pre[N];
int main()
{
    freopen("LenDK.Inp", "r", stdin);
    freopen("LenDK.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        S[i]=S[i-1]+a[i];
    }
    for(int i=0;i<k;i++)
    {
        pre[i]=S[i];
    }
    for(int i=k;i<=n;i++)
    {
        pre[i]=min(pre[i-k],S[i-k]);
    }
    for(int i=k;i<=n;i++)
    {
        kq=max(kq,S[i]-pre[i]);
    }
    cout<<kq;
}

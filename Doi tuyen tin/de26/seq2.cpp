#include<bits/stdc++.h>
using namespace std;
long long n,a[1000007],ma[1000007],mi[1000007];
int main()
{
    freopen("seq2.inp","r",stdin);
    freopen("seq2.out","w",stdout);
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    cin>>n;
    for(int i = 1;i <= n; i++)
        cin>>a[i];
    ma[1] = a[1];
    mi[n] = a[n];
    for(int i = 2;i <= n; i++)
    {
        ma[i]=max(a[i],ma[i-1]);
    }
    for(int i = n-1;i > 0;i--)
    {
        mi[i]=min(a[i],mi[i+1]);
    }
    long long ans = -1000007;
    for(int i = 2;i < n;i++)
    {
        ans = max(ans,a[i]+ma[i-1]-mi[i+1]);
    }
    cout<<ans;
    return 0;
}

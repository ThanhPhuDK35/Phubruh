#include<bits/stdc++.h>
using namespace std;
pair<long long,long long> b[100005];
long long ans=1e9,x,y,t,u, n;

int main()
{
    freopen("redblackmax.INP","r",stdin);
    freopen("redblackmax.OUT","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
    for (int i = 1 ; i <= n ; i++ )
        cin >> b[i].first;
	for (int i = 1 ; i <= n ; i++ )
	    cin >> b[i].second;
	for (int i = 1 ; i <= n ; i++ )
    {
        if ( b[i].second == 0 )
           x = b[i].first;
    }
    for (int i = 1 ; i <= n ; i++ )
    {
        if ( b[i].second == 2 )
           y = b[i].first;
    }
    for (int i = n ; i >= 1 ; i-- )
    {
        if ( b[i].second == 0 )
           t = b[i].first;
    }
    for (int i = n ; i >= 1 ; i-- )
    {
        if ( b[i].second == 2 )
           u = b[i].first;
    }
    ans = max(abs(u-x),abs(t-y));
    cout << ans;
}

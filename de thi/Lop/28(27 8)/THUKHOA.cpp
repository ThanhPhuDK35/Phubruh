#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("THUKHOA.INP","r",stdin);
    freopen("THUKHOA.OUT","w",stdout);
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long n;
    float a[10005],mx=-1e9;
    cin>>n;
    for (int i=1; i<=n; i++)
        cin>>a[i];
    for (int i=1; i<=n; i++)
        mx=max(mx,a[i]);
        cout<<setprecision(2)<<fixed<<mx;
}
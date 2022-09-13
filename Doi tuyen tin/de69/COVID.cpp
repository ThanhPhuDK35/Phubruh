#include<bits/stdc++.h>
using namespace std;
long long n, a, b, s;

int main()
{
    freopen("COVID.Inp", "r", stdin);
    freopen("COVID.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	cin>>n>>a>>b;
	s = n-a;
	b = min(b ,a);
	s += b;
	cout<<n - s<<" "<<a;
	return 0 ;
}

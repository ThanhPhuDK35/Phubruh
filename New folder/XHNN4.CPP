#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll y = 0,n,a[100000005];
int main()
{
    freopen("xhnn4.inp","r",stdin);
    freopen("xhnn4.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for( ll i = 1; i <= n; i++)
        cin>>a[i];
    sort( a+1 , a+1+n );
    ll dem = 1;
    for( ll i = 1; i <= n; i++)
    {
        if( a[i] == a[i+1] ) dem++;
        else dem = 1;
        y = max(dem,y);
    }
    cout << y << '\n';
    for( ll i = 1 ; i <= n; i++)
    {
        if( a[i] == a[i+1]) dem++;
        else dem = 1;
        if( dem == y ) cout << a[i] << ' ';
    }
}

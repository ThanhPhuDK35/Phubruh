#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[1000005],s=0;
int main()
{
    freopen("sameprice.Inp","r",stdin);
    freopen("sameprice.Out","w",stdout);
    cin >> n;
    for ( long long  i = 1 ; i <= 2*n ; i++ )
        cin >> a[i];
    sort ( a+1,a+1+n*2 );
    for ( long long i = 1 ; i <= 2*n-1 ; i+=2 )
        s = s + 2*min(a[i],a[i+1]);
    cout << s;
}

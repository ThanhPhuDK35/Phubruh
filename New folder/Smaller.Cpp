#include<bits/stdc++.h>
using namespace std;
map<long long,long long> m;
long long n,a[100005],q,b[100005],s=1;

int main()
{
    freopen("smaller.inp", "r", stdin);
    freopen("smaller.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1 ; i <= n ; i++ )
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort( b + 1 , b + n + 1);
    for (int i = 1 ; i <= n ; i++ )
    {
        if ( b[i] == b[i+1] )
            s++;
        if ( b[i] != b[i+1] )
        {
            m[b[i]] = abs(i-s);
            s = 1;
        }
    }
    cin >> q;
    for ( int  i = 1 ; i <= q ; i++ )
    {
            cin >> s;
            cout << m[a[s]] << "\n";
    }
}

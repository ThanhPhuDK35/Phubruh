#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[100],b[10],t,s;
ll ds ( ll n )
{
    ll tmp;
    ll res = 0;
    while( n > 0 )
    {
        tmp = n % 10;
        res = res * 10 + tmp;
        n = n / 10;
    }
    return res;
}
int main()
{
    //freopen("uniquenumber.Inp","r",stdin);
    //freopen("uniquenumber.Out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    b[1]=1;
    b[2]=2;
    b[3]=3;
    b[4]=4;
    b[5]=5;
    b[6]=6;
    b[7]=7;
    b[8]=8;
    b[9]=9;
    for ( ll i = 1 ; i <= n ; i++ )
        {
            cin >> t; ll e = 1;
            if ( t < 10 ) cout << t << '\n';
            else if ( t > 45 ) cout << "-1" << '\n';
          else
            {
                for ( ll i = 9 ; i >= 1 ; i-- )
                {
                    if ( t >= b[i] )
                    {
                        t = t - b[i];
                        s = b[i];
                        if( e == 1)
                            e = s;
                        else
                            e = e*10+s;
                    }
                } cout << ds(e) << '\n' ;
            }
        }
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long n, a[10000001], s=0;

ll demuoc(ll m)
{
    ll d = 1;
    for (ll i=2; i*i <= m; i++)
    {
        ll k = 0;
        while (m % i == 0)
        {
            m = m / i;
            k++;
        }
        d = d*(k+1);
    }
    if (m > 1) d = d * 2;
    return d;
}

int main()
{
    freopen("Tuuoc.INP","r",stdin);
    freopen("Tuuoc.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(demuoc(a[i]) == 4)
        {
            s++;
        }
    }
    cout<<s;

}
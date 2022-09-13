#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, a[10000000], s[10000000], mina = 1e18, ans = -1e18; 
bool nt[10000009];

void sangnto()
{
    memset(nt, true, sizeof(nt));
    nt[0] = nt[1] = false;
    for (ll i = 2; i <= sqrt(10000000); i++) 
         for(ll j = i*i ; j <= 10000000; j+=i) 
              nt[j]=false;
}

int main ()
{
    freopen("EasyTask.Inp", "r", stdin);
    freopen("EasyTask.Out", "w", stdout);
    sangnto();
    cin >> n;
    for(ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        s[i] = s[i-1] + a[i];
    }
    for(ll i = 1; i <= n; i++)
    {
        if(nt[i])
        {
            mina = min(mina, s[i-1]);
            ans = max(ans, s[i] - mina);
        }
    }
    cout << ans;
}
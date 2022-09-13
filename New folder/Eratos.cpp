#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long n, a[1000001];

int main()
{
    freopen("Eratos.Inp", "r", stdin);
    freopen("Eratos.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    memset(a, true, sizeof(a));
    a[0] = a[1] = false;
    for (ll i = 2; i * i <= 1000009-9; i++) 
         for (ll j = i * i; j <= 1000009-9; j+=i) 
              a[j] = false;
    cin >> n;
    for (ll i = 1; i <= n; i++) 
         if (a[i]) cout << i << " ";
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nmax 200000
#define db double
#define fo(i,a,b) for(ll i = a; i <= b; i++)
#define ff(i,a,b) for(ll i = a; i <= b; i--)
#define fi first
#define se second
ll a[nmax],n,k;
db s,tb;
int main()
{
    freopen("MaxAverK.Inp","r",stdin);
    freopen("MaxAverK.Out","w",stdout);
    cin>>n>>k;
     fo(i,1,n)
        cin>>a[i];
     fo(i,1,k)
        s += a[i];
    tb = s/k;
    fo(i,2,n-k+1)
        {
            s = s - a[i-1] + a[k+i-1];
            if ( s/k >= tb ) tb = s/k;
        }
    cout << setprecision (6) << fixed << tb;
}

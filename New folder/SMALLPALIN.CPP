#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll x,y,z,q,l,n,r;
string s;
string solve(string st)
{
    ll l = s.length();
    string t = st;
    ll i,j; i = 0; j = l-1;
    while(i < j){
        t[j] = t[i]; i++; j--;
    }
    if(t <= st) return t;
    ll e = (l-1)/2;
    while(t[e] == '0') {t[e] = '9'; e--;}
    t[e]--;
    if(e == 0 && t[e] == '0')
    {
      string  u = "";
      for(ll h = 1; h < l; h++)
         u += '9';
      return u;
    }
    i = 0; j = l-1;
    while(i < j)
    {
        t[j] = t[i]; i++; j--;
    }
    return t;
}
int main()
{   freopen("SmallPalin.inp","r",stdin);
    freopen("SmallPalin.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>q;
    while(q--)
    {
        cin>>s;
        cout<<solve(s)<<'\n';
    }
}

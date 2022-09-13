#include<bits/stdc++.h>
#define ll long long
#define task ""
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define nx freopen(task".inp","r",stdin),freopen(task".out","w",stdout)
using namespace std;
string s,dau="",cuoi="";
map<ll,ll> m;
ll le=0;
char st;
int main()
{
    //nx;
    fast;
    cin>>s;
    for (int i=0; s[i]; i++)
        m[s[i]]++;
    for (auto [k,v]:m)
        if (v%2!=0) le++,st=k;
    if (le==1 && s.size()%2==0 || le>1) return cout<<"no",0;
    for (auto [k,v]:m)
    {
        string f(v/2,k);
        dau=dau+f, cuoi=f+cuoi;
    }
    if (le==1) cout<<dau+st+cuoi;
    else cout<<dau+cuoi;
}

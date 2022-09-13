#include<bits/stdc++.h>
using namespace std;
long long n, ans;
string a[100001], b[1000001], x, y, t[10000001], m[1000001];
map<string , long long> s;

int main()
{
    freopen("CITYSTATE.inp","r",stdin);
    freopen("CITYSTATE.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i];
        a[i]=a[i].substr(0, 2);
        t[i]=a[i]+b[i];
        m[i]=b[i]+a[i];
        s[m[i]]++;
    }
    ans=0;
    for(int i=1; i<=n; i++)
    {
        ans=ans+s[t[i]];
    }
    cout<<ans/2;
}
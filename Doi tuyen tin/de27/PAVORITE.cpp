#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], m, kq;
map<long long, long long>s;

int main()
{
    freopen("PAVORITE.inp","r",stdin);
    freopen("PAVORITE.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s[a[i]]++;
        m=max(m, s[a[i]]);
    }
    if(m < 2) 
    {
        cout<<"-1";
        return 0;
    }
    sort(a+1, a+1+n);
    a[0]=0; kq=0;
    for(int i=1; i<=n; i++)
    {
        if(a[i] != a[i-1] && s[a[i]] == m)
            kq=kq+m;
    }
    cout<<kq<<" ";
    for(int i=1; i<=n; i++)
    {
        if(a[i] != a[i-1] && s[a[i]] == m)
            cout<<a[i]<<" ";
    }
}
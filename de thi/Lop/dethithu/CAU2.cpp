#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], m;
map<long long, long long> s;

int main()
{
    freopen("CAU2.inp","r", stdin);
    freopen("CAU2.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s[a[i]]++;
        m=max(m, s[a[i]]);
    }
    cout<<m;
}
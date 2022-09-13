#include<bits/stdc++.h>
using namespace std;
long long n, q, a[1001], b[1001];
string st, e[1001];

int main()
{
    freopen("SortString.inp","r",stdin);
    freopen("SortString.out","w",stdout);
    cin>>n>>q;
    cin>>st;
    for(int i=1; i<=q; i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0; i<n; i++)
    {
        e[i]=st[i];
    }
    for(int i=1; i<=q; i++)
    {
        sort(e+a[i], e+b[i]+1, greater<string>());
    }
    for(int i=0; i<n; i++)
    {
        cout<<e[i];
    }
}

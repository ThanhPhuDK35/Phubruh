#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], q, m;
map<long long, long long> s;

int main()
{
    freopen("LUCKY.Inp", "r", stdin);
    freopen("LUCKY.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for(int i=1; i <= n; i++)
    {
        cin>>a[i];
        s[a[i]]++;
    }
    cin>>q;
    while(q--)
    {
        cin>>m;
        cout<<s[m]<<"\n";
    }
}

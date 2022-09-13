#include<bits/stdc++.h>
using namespace std;
long long n, a[1000005], m;
map<long long, long long> s;

int main()
{
    freopen("DIEMANH.Inp", "r", stdin);
    freopen("DIEMANH.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s[a[i]]++;
        m=max(m, s[a[i]]);
    }
    cout<<m;
}

#include<bits/stdc++.h>
using namespace std;
long long n, k, a[100000001];

int main()
{
    freopen("Most.Inp", "r", stdin);
    freopen("Most.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    long long b=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        b=__gcd(b, a[i]);
    }
    cout<<k/b*b;
}

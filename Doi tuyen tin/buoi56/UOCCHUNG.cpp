#include<bits/stdc++.h>
using namespace std;
long long n, a[100001], s;

int main()
{
    freopen("UOCCHUNG.INP","r",stdin);
    freopen("UOCCHUNG.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    s=0;
    for(int i=1; i<n; i++)
    {
          s=__gcd(s, a[i]);
    }
    cout<<s;
}

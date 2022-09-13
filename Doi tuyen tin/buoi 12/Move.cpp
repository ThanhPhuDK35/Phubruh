#include <bits/stdc++.h>
using namespace std;
long long n, a[100001], b[100001], s;

int main()
{
    freopen("Move.Inp", "r", stdin);
    freopen("Move.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b+1, b+1+n);
    s=0;
    for(int i=1; i<=n; i++)
    {
        if(a[i] != b[i])
           s++;
    }
    cout<<s;
}
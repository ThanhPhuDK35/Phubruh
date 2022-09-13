#include <bits/stdc++.h>
using namespace std;
long long n, a[10000001], s=0;

int main()
{
    freopen("CUCTIEU.inp", "r", stdin);
    freopen("CUCTIEU.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<= n; i++)
    {
        cin>>a[i];
    }
    if(a[1]<a[2])
        s++;
    if(a[n]<a[n-1])
        s++;
    for(int i=2; i<=n-1; i++)
    {
        if(a[i]<a[i-1] && a[i]<a[i+1])
            s++;
    }
    cout<<s;

}

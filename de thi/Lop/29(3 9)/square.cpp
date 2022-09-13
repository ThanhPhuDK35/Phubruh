#include <bits/stdc++.h>
using namespace std;
long long n, a[10000001], s;

int main()
{
    freopen("square.Inp", "r", stdin);
    freopen("square.Out", "w", stdout);
    cin>>n;
    for(int i=1 ;i<=n; i++)
    {
        cin>>a[i];
        if(a[i] == (long long)(sqrt(a[i]))* (long long)(sqrt(a[i])))
        {
            s=s+a[i];
        }
    }
    cout<<s;
}
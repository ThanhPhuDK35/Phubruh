#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], dem;
map<long long, long long>s;m

int main()
{
    freopen("TTN.Inp", "r", stdin);
    freopen("TTN.Out", "w", stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s[a[i]]++;
    }
    dem=0;
    for(int i=1; i<=n; i++)
    {
        dem=dem+s[a[i]]/a[i];
        s[a[i]]=0;
    }
    cout<<dem;
}

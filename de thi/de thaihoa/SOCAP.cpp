#include<bits/stdc++.h>
using namespace std;
long long n, k, a[1000001], dem;
map<long long, long long> s;

int main()
{
    freopen("SOCAP.inp","r",stdin);
    freopen("SOCAP.out","w", stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s[a[i]]++;
    }
    dem=0;
    sort(a+1, a+1+n);
    for(int i=1; i<=n; i++)
    {
        s[a[i]]--;
        dem += s[a[i]-k] + s[a[i]+k];
    }
    cout<<dem;
}
#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], k, dem, ans;


void sub1()
{
    dem=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(abs(a[i] - a[j]) == k)
                dem++;
        }
    }
    cout<<dem;
}

void sub2()
{
    sort(a+1, a+1+n);
    map<long long, long  long>mp;
    mp.clear();
    mp[a[1]]++;
    long long ans=0;
    for(int j=2; j<=n; j++)
    {
        int x=a[j]-k;
        ans+=mp[x];
        mp[a[j]]++;
    }
    cout<<ans;
}

int main()
{
    freopen("Dolech.inp","r", stdin);
    freopen("Dolech.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    if(n <= 1000) sub1();
    else sub2();
}

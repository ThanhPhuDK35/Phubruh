#include<bits/stdc++.h>
using namespace std;
long long n, x, a[1000005], ans=0;
map<long long, long long> s;

int main()
{
    //freopen("CLASS.inp","r",stdin);
    //freopen("CLASS.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s[a[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        long long k = x - a[i] ;
        if(k == a[i])
            ans += s[a[i]] - 1 ;
        else
            ans += s[k] ;
    }
    cout << ans / 2;
}

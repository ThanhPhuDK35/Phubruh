#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], s, uc, f[66][600000];

int main()
{
    freopen("TONGCH.inp","r",stdin);
    freopen("TONGCH.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=60; i++)
    {
        for(int b=1; b <= 600000; b++)
        {
            f[i][b] = __gcd(i, b);
        }
    }
    long long dem=0;
    for(int i=1; i<=n; i++)
    {
        uc=a[i];
        s=a[i];
        if(s%uc == 0) dem++;
        for(int j=i+1; j<=n; j++)
        {
            if(uc > 600000)
                break;
            uc=uc*a[j]/f[a[j]][uc];
            s=s+a[j];
            if(s%uc == 0)
                dem++;
        }
    }
    cout<<dem;
}


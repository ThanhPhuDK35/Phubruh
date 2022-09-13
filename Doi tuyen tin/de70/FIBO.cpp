#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], f[1000001], m, vtr;

int main()
{
    freopen("FIBO.Inp", "r", stdin);
    freopen("FIBO.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    f[1]=f[2]=1;
    for(int i=3; i<=200; i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    m=0;
    vtr=0;
    for(int i=1; i <= n; i++)
    {
        long long e=1, dem=0;
        for(int j=i; j<=n; j++)
        {
            if(a[j] == f[e])
                dem++;
            else
                break;
            e++;
        }
        if(dem > m)
        {
            vtr=i;
            m=dem;
        }
    }
    cout<<m<<"\n";
    for(int i=vtr; i<=vtr+m-1; i++)
    {
        cout<<a[i]<<" ";
    }
}

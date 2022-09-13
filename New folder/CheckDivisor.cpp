#include<bits/stdc++.h>
using namespace std;
long long y,z,n,k,m,p[1000001],x[10000001],a[10000001],ans = 0;

int main()
{
    freopen("CheckDivisor.inp","r",stdin);
    freopen("CheckDivisor.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>m;
    for(int i = 1; i <= m; i++)
    {
        cin>>p[i]>>x[i];
    }
    cin>>k;
    for(int i = 1; i <= k; i++)
    {
        cin>>a[i];
        for(int j = 1; j <= m; j++)
        {
            long long cnt = 0;
            while(cnt < x[j] && a[i]%p[j]==0)
            {
                a[i] /= p[j];
                cnt++;
            }
        }
     if(a[i] == 1)
        cout<<1<<"\n";
     else
        cout<<0<<"\n";
    }
}

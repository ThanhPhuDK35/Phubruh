#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], mi, ma, dem;

void sub3()
{
    long long s=0, x=1;
    for(int i=2; i<=n; i++)
        if(a[i] == a[i-1]) x++;
        else{ s+= x*(x-1)}
}

int main()
{
    freopen("TrungThuong.inp","r",stdin);
    freopen("TrungThuong.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    dem=0;
    for(int i=1; i<=n; i++)
    {
        mi=a[i];
        ma=a[i];
        for(int j=i+1; j<=n; j++)
        {
            mi = min(mi, a[j]);
            ma = max(ma, a[j]);
            if((a[i] == mi && a[j] == ma) || (a[i] == ma && a[j] == mi))
            {
                dem++;
            }
        }
    }
    cout<<dem;
}

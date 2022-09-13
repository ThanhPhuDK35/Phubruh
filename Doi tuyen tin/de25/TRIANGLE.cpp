#include <bits/stdc++.h>
using namespace std;
long long d[10000001], demtg=0, i, n, a[50001], nhon, tu, vuong;

long long vu()
{
    long long kq=0;
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
          d[a[i]*a[i]+a[j]*a[j]]++;
    for(int i=1;i<=n;i++)
    {
        kq+=d[a[i]*a[i]];
    }
    return kq;
}

long long tro()
{
    long long kq=0,d,c;
    for(int i=1;i<n-1;i++)
    {
        d=c=i+2;
        for(int j=i+1;j<n;j++)
        {
            while(c<=n && a[i]+a[j]>a[c])
                c++;
            demtg+=c-j-1;
            while(d<=n && a[i]*a[i]+a[j]*a[j] > a[d]*a[d])
                d++;
            kq+=d-j-1;
        }
    }
    return kq;
}

int main()
{
    freopen("TRIANGLE.inp","r",stdin);
    freopen("TRIANGLE.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    vuong=vu(); nhon=tro();
    cout<<nhon<<" "<<vuong<<" "<<demtg-vuong-nhon;
}

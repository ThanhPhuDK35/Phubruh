#include <bits/stdc++.h>

using namespace std;
struct diem
{
    long long x;
    long long y;
};
struct PS
{
    long long tu;
    long long mau;
};
diem a[1000006];
long long n,i,s;
toigian (PS &u)
{
    long long mc;
    mc=__gcd(u.tu,u.mau);
    u.tu=u.tu/mc;
    u.mau=u.mau/mc;
}
int main()
{
    cin>>n;
    for (i=1;i<=n;i++)
        cin>>a[i].x>>a[i].y;
    a[n+1]=a[1];
     for (i=1;i<=n;i++)
     {
         s+=(a[i+1].x+a[i].x)*(a[i+1].y-a[i].y);
     }

    PS dt;
    dt.tu=s;dt.mau=2;
    toigian(dt);
    cout<<dt.tu<<' '<<dt.mau;
}

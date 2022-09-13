#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], tong, s, dau=0, cuoi=0;

int main()
{
    freopen("Split3.inp","r",stdin);
    freopen("Split3.out","w",stdout);
    cin>>n;
    tong=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        tong = tong+a[i];
    }
    if(tong%3 != 0 || n <= 2)
    {
        cout<<0;
        return 0;
    } 
    if(tong == 0)
    {
        cout<<(n-2)*(n-1)/2;
        return 0;
    }
    tong = tong/3;
    s=0;
    for(int i=1; i<=n; i++)
    {
        s=s+a[i];
        if(s == tong)
        {
            dau++;
        }
        if(s > tong) break;;
    }
    s=0;
    for(int i=n; i>=1; i--)
    {
        s=s+a[i];
        if(s == tong)
        {
            cuoi++;
        }
        if(s > tong) break;;
    }
    cout<<dau*cuoi;
}
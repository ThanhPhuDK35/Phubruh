#include<bits/stdc++.h>
using namespace std;
long long n,a[1000005],b[1000005],k=0;

long long demuoc(long long n)
{
    long long dem=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0) dem=dem+2;
        if(i*i==n) dem--;
    }
    return dem;
}

int main()
{
    freopen("BSBB.Inp", "r", stdin);
    freopen("BSBB.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for(int i=1;i<n;i++)
    {
        long long s=n-i;
        k+=demuoc(s);
    }
    cout<<k;

}

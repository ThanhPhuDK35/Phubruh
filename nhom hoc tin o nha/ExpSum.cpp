#include<bits/stdc++.h>
using namespace std;
long long n, x[1000001], a[1000001], s, ans, t;

void xu_ly_nghiem()
{
    int e=0;
    for(int i=1; i<=n; i++)
    {
        e=e+x[i]*a[i];
    }
    if(e == s)
        ans=1;
}

void Try(long long i, long long e)
{
    if(ans == 1) return;
    for(int t=0; t <= e/a[i]; t++)
    {
        x[i]=t; 
        if(i == n)
            xu_ly_nghiem();
        else
            Try(i+1, e-t*a[i]);
    }
}

int main()
{
    freopen("ExpSum.inp","r",stdin);
    freopen("ExpSum.out","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        for(int i=1; i<=n; i++)
            cin>>a[i];
        sort(a+1, a+1+n);
        ans=0;
        Try(1, s);
        cout<<ans<<"\n";
    }
}
#include<bits/stdc++.h>
using namespace std;
long long n, k, x[300], a[26], dem=0;

void check()
{
    int s=0;
    for(int i=1; i<=n; i++)
    {
        if(x[i] == 1) s+= a[i];
    }
    if(s==k) dem++;
}

void Try(int i)
{
    for(int j=0; j<=1; j++)
    {
        x[i]=j;
        if(i == n) check();
        else Try(i+1);
    }
}

int main()
{
    freopen("GROUP.inp","r",stdin);
    freopen("GROUP.out","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n; i++) cin>>a[i];
    Try(1);
    cout<<dem;
}

#include<bits/stdc++.h>
using namespace std;
long long n, a[100001], x, s, z;

int main()
{
    freopen("INSUL.inp","r",stdin);
    freopen("INSUL.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    sort(a+1,a+n+1);
    if(n%2==0)
    {
        x=n/2;
    }
    else
    {
        x=n/2;
        s=s+a[n/2+1];
    }
    for(int i=1;i<=x;i++)
    {
        s=s+a[i]+a[n-z];
        s=s+abs(a[i]-a[n-z]);
        z++;
    }
    cout<<s;
}




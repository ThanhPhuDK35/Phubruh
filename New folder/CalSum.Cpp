#include<bits/stdc++.h>
using namespace std;
long long n, a[101], x, s;

int main()
{
    freopen("CalSum.inp","r",stdin);
    freopen("CalSum.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    cin>>x;
        for(int i=1; i<=n; i++)
    {
        s=s+abs(a[i]-x);
    }
    cout<<s;
}

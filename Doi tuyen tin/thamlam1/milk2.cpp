#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], x, s;

int main()
{
    freopen("milk2.inp","r",stdin);
    freopen("milk2.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n, greater<int>());
    for(int i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }
    x=0;
    s=0;
    for(int i=1; i<=n; i++)
    {
        if(a[i]- x >= 0)
            s=s+a[i]-x;
        x++;
    }
    cout<<s;
}

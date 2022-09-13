#include <bits/stdc++.h>
using namespace std;
long long n, a[10000001], s;

int main()
{
    freopen("SG.inp","r",stdin);
    freopen("SG.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    s=1;
    for(int i=n-1; i>=1; i--)
    {
        if(a[n] == a[i])
           s++;
        else
           break;
    }
    cout<<s;
}
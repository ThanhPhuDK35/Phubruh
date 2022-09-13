#include <bits/stdc++.h>
using namespace std;
long long n, a[1000001], s;

int main()
{
    freopen("cp.INP","r",stdin);
    freopen("cp.OUT","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]==(long long)(sqrt(a[i]))* (long long)(sqrt(a[i])))
            s=s+a[i];
    }
    cout<<s;
}

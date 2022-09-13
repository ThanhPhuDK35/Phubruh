#include<bits/stdc++.h>
using namespace std;
long long n, a[100001], b[100000001], s, m;

int main()
{
    freopen("CPHONE.inp","r",stdin);
    freopen("CPHONE.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    for(int i=1; i<=n ;i++)
    {
        b[a[i]]++;
        m=max(m, b[a[i]]);
    }
    a[0] = 0;
    for(int i=1; i<=n; i++)
    {
        if(b[a[i]] == m && a[i] !=  a[i-1])
            cout<<a[i]<<"\n";
    }
}

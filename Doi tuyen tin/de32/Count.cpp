#include<bits/stdc++.h>
using namespace std;
long long n, k, a[10000001], kq=0, s, j;

int main()
{
    freopen("COUNT.inp","r", stdin);
    freopen("COUNT.out","w", stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    s=0;
    j=1;
    for(int i=1; i<=n; i++)
    {

        s=s+a[i];
        while(s >= k) s=s-a[j++];
        kq=kq+i-j+1;
    }
    cout<<kq;
}

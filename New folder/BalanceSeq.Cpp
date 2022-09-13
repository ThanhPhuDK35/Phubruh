#include<bits/stdc++.h>
using namespace std;
long long n, a[100000001], m, s, mi=1e8;

int main()
{
    freopen("BalanceSeq.inp","r",stdin);
    freopen("BalanceSeq.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=2; i<=n; i++)
    {
        m=a[i-1];
        if(m>a[i])
            m=a[i];
        if(m>a[i+1])
            m=a[i+1];
        s=abs(a[i-1]-m)+abs(a[i]-m)+abs(a[i+1]-m);
        if(mi>s)
            mi=s;
    }
    cout<<mi;
}

#include<bits/stdc++.h>
using namespace std;
long long a[10000001], ma[10000001], n, m, s;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n;i++)
    {
        cin>>a[i];
    }
    ma[1]=a[1];
    m=a[1];
    for(int i=2; i<=n; i++)
    {
        ma[i]=max(ma[i-1]+a[i], a[i]);
        m=max(m, ma[i]);
    }
    cout<<m;
}

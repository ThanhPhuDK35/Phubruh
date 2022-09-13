#include<bits/stdc++.h>
using namespace std;
long long n,a,b,d[1000001];

int main()
{
    freopen("findpos.inp","r",stdin);
    freopen("findpos.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        d[a]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b;
        cout<<d[b]<<" ";
    }
}
